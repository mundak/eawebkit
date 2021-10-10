/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// DO NOT EDIT THIS FILE. It is automatically generated from WebInputs.json
// by the script: JavaScriptCore/replay/scripts/CodeGeneratorReplayInputs.py

#ifndef WebReplayInputs_h
#define WebReplayInputs_h

#if ENABLE(WEB_REPLAY)
#include "EventLoopInput.h"
#include "PlatformEvent.h"
#include "PluginData.h"
#include "SecurityOrigin.h"
#include "URL.h"
#include <replay/EncodedValue.h>
#include <wtf/TypeCasts.h>
#include <wtf/text/WTFString.h>

namespace WebCore {
class Page;
class PlatformKeyboardEvent;
class PlatformMouseEvent;
class PlatformWheelEvent;
class PluginData;
class SecurityOrigin;
enum MouseButton : int8_t;
enum PlatformWheelEventGranularity : uint8_t;
enum PlatformWheelEventPhase : uint8_t;
enum PluginLoadClientPolicy : uint8_t;
enum ScrollDirection : uint8_t;
enum ScrollGranularity : uint8_t;
enum ScrollLogicalDirection : uint8_t;
enum class EncodedCType;
}

namespace JSC {
enum class InputQueue;
}


namespace WebCore {
class BeginSegmentSentinel;
class DocumentLastModifiedDate;
class EndSegmentSentinel;
class HandleMouseMove;
class HandleMousePress;
class HandleMouseRelease;
class HandleKeyPress;
class HandleWheelEvent;
class InitialNavigation;
class FetchPluginData;
class LogicalScrollPage;
class ScrollPage;
} // namespace WebCore

namespace JSC {
template<> struct WEBCORE_EXPORT InputTraits<WebCore::BeginSegmentSentinel> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::BeginSegmentSentinel&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::BeginSegmentSentinel>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::DocumentLastModifiedDate> {
    static InputQueue queue() { return InputQueue::ScriptMemoizedData; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::DocumentLastModifiedDate&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::DocumentLastModifiedDate>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::EndSegmentSentinel> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::EndSegmentSentinel&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::EndSegmentSentinel>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::HandleMouseMove> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::HandleMouseMove&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::HandleMouseMove>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::HandleMousePress> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::HandleMousePress&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::HandleMousePress>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::HandleMouseRelease> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::HandleMouseRelease&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::HandleMouseRelease>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::HandleKeyPress> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::HandleKeyPress&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::HandleKeyPress>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::HandleWheelEvent> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::HandleWheelEvent&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::HandleWheelEvent>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::InitialNavigation> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::InitialNavigation&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::InitialNavigation>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::FetchPluginData> {
    static InputQueue queue() { return InputQueue::ScriptMemoizedData; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::FetchPluginData&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::FetchPluginData>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::LogicalScrollPage> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::LogicalScrollPage&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::LogicalScrollPage>&);
};

template<> struct WEBCORE_EXPORT InputTraits<WebCore::ScrollPage> {
    static InputQueue queue() { return InputQueue::EventLoopInput; }
    static const String& type();

    static void encode(JSC::EncodedValue&, const WebCore::ScrollPage&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<WebCore::ScrollPage>&);
};
template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::EncodedCType> {
    typedef WebCore::EncodedCType DecodedType;

    static EncodedValue encodeValue(const WebCore::EncodedCType& value);
    static bool decodeValue(EncodedValue&, WebCore::EncodedCType& value);
};

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::MouseButton> {
    typedef WebCore::MouseButton DecodedType;

    static EncodedValue encodeValue(const WebCore::MouseButton& value);
    static bool decodeValue(EncodedValue&, WebCore::MouseButton& value);
};

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::PlatformEvent::Modifiers> {
    typedef WebCore::PlatformEvent::Modifiers DecodedType;

    static EncodedValue encodeValue(const WebCore::PlatformEvent::Modifiers& value);
    static bool decodeValue(EncodedValue&, WebCore::PlatformEvent::Modifiers& value);
};

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::PlatformEvent::Type> {
    typedef WebCore::PlatformEvent::Type DecodedType;

    static EncodedValue encodeValue(const WebCore::PlatformEvent::Type& value);
    static bool decodeValue(EncodedValue&, WebCore::PlatformEvent::Type& value);
};

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::PlatformWheelEventGranularity> {
    typedef WebCore::PlatformWheelEventGranularity DecodedType;

    static EncodedValue encodeValue(const WebCore::PlatformWheelEventGranularity& value);
    static bool decodeValue(EncodedValue&, WebCore::PlatformWheelEventGranularity& value);
};

#if PLATFORM(COCOA)
template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::PlatformWheelEventPhase> {
    typedef WebCore::PlatformWheelEventPhase DecodedType;

    static EncodedValue encodeValue(const WebCore::PlatformWheelEventPhase& value);
    static bool decodeValue(EncodedValue&, WebCore::PlatformWheelEventPhase& value);
};
#endif // PLATFORM(COCOA)

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::PluginLoadClientPolicy> {
    typedef WebCore::PluginLoadClientPolicy DecodedType;

    static EncodedValue encodeValue(const WebCore::PluginLoadClientPolicy& value);
    static bool decodeValue(EncodedValue&, WebCore::PluginLoadClientPolicy& value);
};

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::ScrollDirection> {
    typedef WebCore::ScrollDirection DecodedType;

    static EncodedValue encodeValue(const WebCore::ScrollDirection& value);
    static bool decodeValue(EncodedValue&, WebCore::ScrollDirection& value);
};

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::ScrollGranularity> {
    typedef WebCore::ScrollGranularity DecodedType;

    static EncodedValue encodeValue(const WebCore::ScrollGranularity& value);
    static bool decodeValue(EncodedValue&, WebCore::ScrollGranularity& value);
};

template<> struct WEBCORE_EXPORT EncodingTraits<WebCore::ScrollLogicalDirection> {
    typedef WebCore::ScrollLogicalDirection DecodedType;

    static EncodedValue encodeValue(const WebCore::ScrollLogicalDirection& value);
    static bool decodeValue(EncodedValue&, WebCore::ScrollLogicalDirection& value);
};
} // namespace JSC

namespace WebCore {
class BeginSegmentSentinel : public EventLoopInput<BeginSegmentSentinel> {
public:
    WEBCORE_EXPORT BeginSegmentSentinel();
    virtual ~BeginSegmentSentinel();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;


};

class DocumentLastModifiedDate : public NondeterministicInput<DocumentLastModifiedDate> {
public:
    WEBCORE_EXPORT DocumentLastModifiedDate(double fallbackValue);
    virtual ~DocumentLastModifiedDate();

    double fallbackValue() const { return m_fallbackValue; }
private:
    double m_fallbackValue;
};

class EndSegmentSentinel : public EventLoopInput<EndSegmentSentinel> {
public:
    WEBCORE_EXPORT EndSegmentSentinel();
    virtual ~EndSegmentSentinel();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;


};

class HandleMouseMove : public EventLoopInput<HandleMouseMove> {
public:
    WEBCORE_EXPORT HandleMouseMove(std::unique_ptr<PlatformMouseEvent> platformEvent, bool scrollbarTargeted);
    virtual ~HandleMouseMove();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    const PlatformMouseEvent& platformEvent() const { return *m_platformEvent; }
    bool scrollbarTargeted() const { return m_scrollbarTargeted; }
private:
    std::unique_ptr<PlatformMouseEvent> m_platformEvent;
    bool m_scrollbarTargeted;
};

class HandleMousePress : public EventLoopInput<HandleMousePress> {
public:
    WEBCORE_EXPORT HandleMousePress(std::unique_ptr<PlatformMouseEvent> platformEvent);
    virtual ~HandleMousePress();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    const PlatformMouseEvent& platformEvent() const { return *m_platformEvent; }
private:
    std::unique_ptr<PlatformMouseEvent> m_platformEvent;
};

class HandleMouseRelease : public EventLoopInput<HandleMouseRelease> {
public:
    WEBCORE_EXPORT HandleMouseRelease(std::unique_ptr<PlatformMouseEvent> platformEvent);
    virtual ~HandleMouseRelease();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    const PlatformMouseEvent& platformEvent() const { return *m_platformEvent; }
private:
    std::unique_ptr<PlatformMouseEvent> m_platformEvent;
};

class HandleKeyPress : public EventLoopInput<HandleKeyPress> {
public:
    WEBCORE_EXPORT HandleKeyPress(std::unique_ptr<PlatformKeyboardEvent> platformEvent);
    virtual ~HandleKeyPress();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    const PlatformKeyboardEvent& platformEvent() const { return *m_platformEvent; }
private:
    std::unique_ptr<PlatformKeyboardEvent> m_platformEvent;
};

class HandleWheelEvent : public EventLoopInput<HandleWheelEvent> {
public:
    WEBCORE_EXPORT HandleWheelEvent(std::unique_ptr<PlatformWheelEvent> platformEvent);
    virtual ~HandleWheelEvent();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    const PlatformWheelEvent& platformEvent() const { return *m_platformEvent; }
private:
    std::unique_ptr<PlatformWheelEvent> m_platformEvent;
};

class InitialNavigation : public EventLoopInput<InitialNavigation> {
public:
    WEBCORE_EXPORT InitialNavigation(RefPtr<SecurityOrigin>&& securityOrigin, URL url, String referrer);
    virtual ~InitialNavigation();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    static std::unique_ptr<InitialNavigation> createFromPage(const Page&);
    RefPtr<SecurityOrigin> securityOrigin() const { return m_securityOrigin; }
    const URL& url() const { return m_url; }
    const String& referrer() const { return m_referrer; }
private:
    RefPtr<SecurityOrigin> m_securityOrigin;
    URL m_url;
    String m_referrer;
};

class FetchPluginData : public NondeterministicInput<FetchPluginData> {
public:
    WEBCORE_EXPORT FetchPluginData(RefPtr<PluginData>&& pluginData);
    virtual ~FetchPluginData();

    RefPtr<PluginData> pluginData() const { return m_pluginData; }
private:
    RefPtr<PluginData> m_pluginData;
};

class LogicalScrollPage : public EventLoopInput<LogicalScrollPage> {
public:
    WEBCORE_EXPORT LogicalScrollPage(ScrollLogicalDirection direction, ScrollGranularity granularity);
    virtual ~LogicalScrollPage();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    ScrollLogicalDirection direction() const { return m_direction; }
    ScrollGranularity granularity() const { return m_granularity; }
private:
    ScrollLogicalDirection m_direction;
    ScrollGranularity m_granularity;
};

class ScrollPage : public EventLoopInput<ScrollPage> {
public:
    WEBCORE_EXPORT ScrollPage(ScrollDirection direction, ScrollGranularity granularity);
    virtual ~ScrollPage();

    // EventLoopInput API
    virtual void dispatch(ReplayController&) override final;
    ScrollDirection direction() const { return m_direction; }
    ScrollGranularity granularity() const { return m_granularity; }
private:
    ScrollDirection m_direction;
    ScrollGranularity m_granularity;
};
} // namespace WebCore

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::BeginSegmentSentinel)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::BeginSegmentSentinel>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::DocumentLastModifiedDate)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::DocumentLastModifiedDate>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::EndSegmentSentinel)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::EndSegmentSentinel>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::HandleMouseMove)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::HandleMouseMove>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::HandleMousePress)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::HandleMousePress>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::HandleMouseRelease)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::HandleMouseRelease>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::HandleKeyPress)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::HandleKeyPress>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::HandleWheelEvent)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::HandleWheelEvent>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::InitialNavigation)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::InitialNavigation>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::FetchPluginData)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::FetchPluginData>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::LogicalScrollPage)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::LogicalScrollPage>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::ScrollPage)
    static bool isType(const NondeterministicInputBase& input) { return input.type() == InputTraits<WebCore::ScrollPage>::type(); }
SPECIALIZE_TYPE_TRAITS_END()

#define WEB_REPLAY_INPUT_NAMES_FOR_EACH(macro) \
    macro(BeginSegmentSentinel) \
    macro(DocumentLastModifiedDate) \
    macro(EndSegmentSentinel) \
    macro(HandleMouseMove) \
    macro(HandleMousePress) \
    macro(HandleMouseRelease) \
    macro(HandleKeyPress) \
    macro(HandleWheelEvent) \
    macro(InitialNavigation) \
    macro(FetchPluginData) \
    macro(LogicalScrollPage) \
    macro(ScrollPage) \
    \
// end of WEB_REPLAY_INPUT_NAMES_FOR_EACH

#endif // ENABLE(WEB_REPLAY)

#endif // WebReplayInputs_h