/*
 * Copyright (C) 2012, 2015 Apple Inc. All rights reserved.
 * Copyright (C) 2014, 2015 Electronic Arts Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "config.h"

//+EAWebKitChange
//2/25/2014
#include "JSExportMacros.h"
//-EAWebKitChange
#include "ArrayProfile.h"
#include "CodeBlock.h"
#include "CommonSlowPaths.h"
#include "Debugger.h"
#include "DirectArguments.h"
#include "Exception.h"
#include "Executable.h"
#include "Heap.h"
#include "Interpreter.h"
#include "JITStubs.h"
#include "JSArray.h"
#include "JSCell.h"
#include "JSFunction.h"
#include "VM.h"
#include "JSEnvironmentRecord.h"
#include "JSGlobalObject.h"
#include "JSObject.h"
#include "JSStack.h"
#include "JSString.h"
#include "JSTypeInfo.h"
#include "JumpTable.h"
#include "LLIntOfflineAsmConfig.h"
#include "MarkedSpace.h"
#include "ProtoCallFrame.h"
#include "Structure.h"
#include "StructureChain.h"
#include "TypeProfiler.h"
#include "TypeProfilerLog.h"
#include "VMEntryRecord.h"
#include "ValueProfile.h"
#include "Watchdog.h"
#include <wtf/text/StringImpl.h>

namespace JSC {

#define OFFLINE_ASM_OFFSETOF(clazz, field) (static_cast<unsigned>(OBJECT_OFFSETOF(clazz, field)))

class LLIntOffsetsExtractor {
public:
    static const unsigned* dummy();
};

const unsigned* LLIntOffsetsExtractor::dummy()
{
// This is a file generated by offlineasm/generate_offsets_extractor.rb, and contains code
// to create a table of offsets, sizes, and a header identifying what combination of
// Platform.h macros we have set. We include it inside of a method on LLIntOffsetsExtractor
// because the fields whose offsets we're extracting are mostly private. So we make their
// classes friends with LLIntOffsetsExtractor, and include the header here, to get the C++
// compiler to kindly step aside and yield to our best intentions.
#include "LLIntDesiredOffsets.h"
    return extractorTable;
}

} // namespace JSC

//+EAWebKitChange
//3/11/2014
#if defined(EA_PLATFORM_XBOXONE) || defined(EA_PLATFORM_XBSX)
int main(Platform::Array<Platform::String^>^ args)
{
#else
int main(int, char**)
{
#endif
//-EAWebKitChange
    // Out of an abundance of caution, make sure that LLIntOffsetsExtractor::dummy() is live,
    // and the extractorTable is live, too.
    printf("%p\n", JSC::LLIntOffsetsExtractor::dummy());
    return 0;
}


