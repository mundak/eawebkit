/*H********************************************************************************/
/*!
    \File dirtylibnx.cpp

    \Description
        Platform-specific support library for network code.  Supplies simple time,
        debug printing, and mutex functions.

    \Copyright
        Copyright (c) 2018 Electronic Arts Inc.

    \Version 08/21/2018 (tcho) First Version
*/
/********************************************************************************H*/

/*** Include files ****************************************************************/

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>

#include <nn/os.h>
#include <nn/time.h>
#include <nn/time/time_Api.h>
#include <nn/time/time_TimeZoneApi.h>
#include <nn/time/time_StandardUserSystemClock.h>

#include "DirtySDK/dirtysock.h"
#include "DirtySDK/dirtysock/dirtythread.h"
#include "DirtySDK/dirtysock/netconn.h"

/*** Defines **********************************************************************/


/*** Type Definitions *************************************************************/

/*** Variables ********************************************************************/
// is time lib initialized
static uint8_t isTimeInitialize = FALSE;

// idle thread state
static volatile int32_t g_idlelife = -1;

#if DIRTYCODE_LOGGING
// static printf buffer to avoid using dynamic allocation
static char _NetLib_aPrintfMem[4096];
#endif

/*** Private Functions ************************************************************/


/*F********************************************************************************/
/*!
    \Function _NetLibThread

    \Description
        Thread to handle special library tasks.

    \Input *pArg    - pointer to argument

    \Version 06/21/2005 (jbrookes)
*/
/********************************************************************************F*/
static void _NetLibThread(void *pArg)
{
    char strThreadId[32];

    // get the thread id
    DirtyThreadGetThreadId(strThreadId, sizeof(strThreadId));

    // show we are running
    NetPrintf(("dirtylibnx: idle thread running (thid=%s)\n", strThreadId));
    g_idlelife = 1;

    // run while we have sema
    while (g_idlelife == 1)
    {
        // call idle functions
        NetIdleCall();

        // wait for next tick
        nn::os::SleepThread(nn::TimeSpan::FromMilliSeconds(50));
    }

    // report termination
    NetPrintf(("dirtylibnx: idle thread exiting\n"));

    // show we are dead
    g_idlelife = 0;
}


/*** Public functions *************************************************************/


/*F********************************************************************************/
/*!
    \Function NetLibCreate

    \Description
        Initialize the network library module.

    \Input iThreadPrio        - priority to start the _NetLibThread with
    \Input iThreadStackSize   - stack size to start the _NetLibThread with (in bytes)
    \Input iThreadCpuAffinity - cpu affinity to start the _NetLibThread with

    \Version 06/21/2006 (jbrookes)
*/
/********************************************************************************F*/
void NetLibCreate(int32_t iThreadPrio, int32_t iThreadStackSize, int32_t iThreadCpuAffinity)
{
    int32_t iResult;

    // init common functionality
    NetLibCommonInit();

    // init idlelife tracker
    g_idlelife = -1;

    // create a worker thread
    DirtyThreadConfigT ThreadConfig;

    // configure the threading
    ds_memclr(&ThreadConfig, sizeof(ThreadConfig));
    ThreadConfig.pName = "NetLib";
    ThreadConfig.iAffinity = iThreadCpuAffinity;
    ThreadConfig.iPriority = iThreadPrio;
    ThreadConfig.iVerbosity = 1;

    if ((iResult = DirtyThreadCreate(_NetLibThread, NULL, &ThreadConfig)) == 0)
    {
        // wait for thread startup
        while (g_idlelife == -1)
        {
            nn::os::SleepThread(nn::TimeSpan::FromMicroSeconds(100));
        }
    }
    else
    {
        NetPrintf(("dirtylibnx: unable to create idle thread (err=%d)\n", iResult));
        g_idlelife = 0;
    }

    #if DIRTYCODE_LOGGING
    // set explicit printf buffer to avoid dynamic malloc() use
    setvbuf(stdout, _NetLib_aPrintfMem, _IOLBF, sizeof(_NetLib_aPrintfMem));
    #endif
}

/*F********************************************************************************/
/*!
    \Function NetLibDestroy

    \Description
        Destroy the network library module.

    \Input uShutdownFlags   - NET_SHUTDOWN_* flags

    \Version 06/21/2006 (jbrookes)
*/
/********************************************************************************F*/
void NetLibDestroy(uint32_t uShutdownFlags)
{
    // signal a shutdown when the thread is running
    if (g_idlelife == 1)
    {
        g_idlelife = 2;

        // wait for thread to terminate
        while (g_idlelife > 0)
        {
            nn::os::SleepThread(nn::TimeSpan::FromMicroSeconds(1));
        }
    }

    // shut down common functionality
    NetLibCommonShutdown();
}

/*F********************************************************************************/
/*!
    \Function NetTick

    \Description
        Return some kind of increasing tick count with millisecond scale (does
        not need to have millisecond precision, but higher precision is better).

    \Output
        uint32_t    - millisecond tick count

    \Version 06/21/2006 (jbrookes)
*/
/********************************************************************************F*/
uint32_t NetTick(void)
{
    uint32_t uCurTick;
    struct timeval now;
    gettimeofday(&now, 0);
    uCurTick = (uint32_t)(((uint64_t)now.tv_sec * 1000) + (uint64_t)now.tv_usec / 1000);
    return(uCurTick);
}

/*F********************************************************************************/
/*!
    \Function NetTickUsec

    \Description
        Return increasing tick count in microseconds.  Used for performance timing
        purposes.

    \Output
        uint64_t    - microsecond tick count

    \Version 01/30/2015 (jbrookes)
*/
/********************************************************************************F*/
uint64_t NetTickUsec(void)
{
    struct timeval now;
    gettimeofday(&now, 0);
    return(((uint64_t)now.tv_sec * 1000000) + (uint64_t)now.tv_usec);
}

/*F********************************************************************************/
/*!
    \Function NetLocalTime

    \Description
        This converts the input GMT time to the local time as specified by the
        system clock.  This function follows the re-entrant localtime_r function
        signature.

    \Input *pTm         - storage for localtime output
    \Input uElap        - GMT time

    \Output
        struct tm *     - pointer to localtime result

    \Version 04/23/2008 (jbrookes)
*/
/********************************************************************************F*/
struct tm *NetLocalTime(struct tm *pTm, uint64_t uElap)
{
    time_t uTimeT = (time_t)uElap;
    return(localtime_r(&uTimeT, pTm));
}

/*F********************************************************************************/
/*!
    \Function NetPlattimeToTime

    \Description
        This converts the input platform-specific time data structure to the
        generic time data structure.

    \Input *pTm         - generic time data structure to be filled by the function
    \Input *pPlatTime   - pointer to the platform-specific data structure

    \Output
        struct tm *     - NULL=failure; else pointer to user-provided generic time data structure

    \Notes
        pPlatTime is expected to point to a timespec on Unix platforms

    \Version 05/08/2010 (mclouatre)
*/
/********************************************************************************F*/
struct tm *NetPlattimeToTime(struct tm *pTm, void *pPlatTime)
{
    if (isTimeInitialize == FALSE)
    {
        nn::time::Initialize();
        isTimeInitialize = TRUE;
    }

    nn::time::PosixTime posixTime;
    nn::time::CalendarTime calendarTime;
    nn::time::CalendarAdditionalInfo calendarAdditionalInfo;
    
    posixTime.value = *(int64_t *)pPlatTime;
    nn::time::ToCalendarTime(&calendarTime, &calendarAdditionalInfo, posixTime);

    pTm->tm_sec = calendarTime.second;
    pTm->tm_min = calendarTime.minute;
    pTm->tm_hour = calendarTime.hour;
    pTm->tm_mday = calendarTime.day;
    pTm->tm_mon = calendarTime.month - 1;
    pTm->tm_year = calendarTime.year - 1900;
    pTm->tm_wday = calendarAdditionalInfo.dayOfWeek;
    pTm->tm_yday = 0;
    pTm->tm_isdst = 0;

    return(pTm);
}

/*F********************************************************************************/
/*!
    \Function NetPlattimeToTimeMs

    \Description
        This function retrieves the current date time and fills in the
        generic time data structure prrovided. It has the option of returning millisecond
        which is not part of the generic time data structure

    \Input *pTm         - generic time data structure to be filled by the function
    \Input *pImSec      - output param for milisecond to be filled by the function (optional can be NULL)

    \Output
        struct tm *     - NULL=failure; else pointer to user-provided generic time data structure

    \Version 09/16/2014 (tcho)
*/
/********************************************************************************F*/
struct tm *NetPlattimeToTimeMs(struct tm *pTm, int32_t *pImSec)
{
    int32_t iMsec;
    int64_t nSec;

    if (isTimeInitialize == FALSE)
    {
        nn::time::Initialize();
        isTimeInitialize = TRUE;
    }

    nn::time::PosixTime posixTime;
    nn::Result result = nn::time::StandardNetworkSystemClock::GetCurrentTime(&posixTime);
    if (result.IsFailure())
    {
        nn::time::StandardUserSystemClock::GetCurrentTime(&posixTime);
    }

    nSec = posixTime.value;
    iMsec = nSec / 1000000;

    if (pImSec != NULL)
    {
        *pImSec = iMsec;
    }

    if (pTm == NULL)
    {
        return(NULL);
    }

    return(NetPlattimeToTime(pTm, &nSec));
}

/*F********************************************************************************/
/*!
    \Function NetTime

    \Description
        This function replaces the standard library time() function. Main
        differences are the missing pointer parameter (not needed) and the uint64_t
        return value. The function returns 0 on unsupported platforms vs time which
        returns -1.

    \Output
        uint64_t    - number of elapsed seconds since Jan 1, 1970.

    \Version 01/12/2005 (gschaefer)
*/
/********************************************************************************F*/
uint64_t NetTime(void)
{
    nn::time::PosixTime posixTime;
    nn::time::StandardUserSystemClock::GetCurrentTime(&posixTime);
    return((uint64_t)posixTime.value);
}
