/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(MEDIA_STREAM)

#include "JSRTCDataChannelEvent.h"

#include "JSDOMBinding.h"
#include "JSRTCDataChannel.h"
#include "RTCDataChannel.h"
#include "RTCDataChannelEvent.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsRTCDataChannelEventChannel(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSRTCDataChannelEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSRTCDataChannelEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSRTCDataChannelEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSRTCDataChannelEventPrototype>(vm.heap)) JSRTCDataChannelEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSRTCDataChannelEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSRTCDataChannelEventPrototypeTableValues[] =
{
    { "channel", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelEventChannel), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSRTCDataChannelEventPrototype::s_info = { "RTCDataChannelEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCDataChannelEventPrototype) };

void JSRTCDataChannelEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSRTCDataChannelEventPrototypeTableValues, *this);
}

const ClassInfo JSRTCDataChannelEvent::s_info = { "RTCDataChannelEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCDataChannelEvent) };

JSRTCDataChannelEvent::JSRTCDataChannelEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<RTCDataChannelEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSRTCDataChannelEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRTCDataChannelEventPrototype::create(vm, globalObject, JSRTCDataChannelEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSRTCDataChannelEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRTCDataChannelEvent>(vm, globalObject);
}

EncodedJSValue jsRTCDataChannelEventChannel(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCDataChannelEvent* castedThis = jsDynamicCast<JSRTCDataChannelEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCDataChannelEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCDataChannelEvent", "channel");
        return throwGetterTypeError(*exec, "RTCDataChannelEvent", "channel");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.channel()));
    return JSValue::encode(result);
}



}

#endif // ENABLE(MEDIA_STREAM)
