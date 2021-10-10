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

#if ENABLE(VIDEO_TRACK)

#include "JSDataCue.h"

#include "DataCue.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsDataCueData(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDataCueData(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDataCueConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDataCuePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDataCuePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDataCuePrototype* ptr = new (NotNull, JSC::allocateCell<JSDataCuePrototype>(vm.heap)) JSDataCuePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDataCuePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSDataCueConstructor : public DOMConstructorObject {
private:
    JSDataCueConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDataCueConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDataCueConstructor* ptr = new (NotNull, JSC::allocateCell<JSDataCueConstructor>(vm.heap)) JSDataCueConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

const ClassInfo JSDataCueConstructor::s_info = { "DataCueConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDataCueConstructor) };

JSDataCueConstructor::JSDataCueConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDataCueConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSDataCue::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("DataCue"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

ConstructType JSDataCueConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSDataCue;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSDataCuePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataCueConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "data", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataCueData), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDataCueData) },
};

const ClassInfo JSDataCuePrototype::s_info = { "DataCuePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDataCuePrototype) };

void JSDataCuePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDataCuePrototypeTableValues, *this);
}

const ClassInfo JSDataCue::s_info = { "DataCue", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDataCue) };

JSDataCue::JSDataCue(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DataCue>&& impl)
    : JSTextTrackCue(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSDataCue::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDataCuePrototype::create(vm, globalObject, JSDataCuePrototype::createStructure(vm, globalObject, JSTextTrackCue::getPrototype(vm, globalObject)));
}

JSObject* JSDataCue::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDataCue>(vm, globalObject);
}

EncodedJSValue jsDataCueData(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDataCue* castedThis = jsDynamicCast<JSDataCue*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDataCuePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DataCue", "data");
        return throwGetterTypeError(*exec, "DataCue", "data");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.data()));
    return JSValue::encode(result);
}


EncodedJSValue jsDataCueConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSDataCuePrototype* domObject = jsDynamicCast<JSDataCuePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSDataCue::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSDataCueData(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDataCue* castedThis = jsDynamicCast<JSDataCue*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDataCuePrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DataCue", "data");
        else
            throwSetterTypeError(*exec, "DataCue", "data");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    ArrayBuffer* nativeValue = toArrayBuffer(value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setData(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSDataCue::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDataCueConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(VIDEO_TRACK)
