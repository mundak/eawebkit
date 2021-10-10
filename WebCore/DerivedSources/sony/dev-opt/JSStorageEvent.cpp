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
#include "JSStorageEvent.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "JSStorage.h"
#include "Storage.h"
#include "StorageEvent.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsStorageEventPrototypeFunctionInitStorageEvent(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsStorageEventKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsStorageEventOldValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsStorageEventNewValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsStorageEventUrl(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsStorageEventStorageArea(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsStorageEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSStorageEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSStorageEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSStorageEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSStorageEventPrototype>(vm.heap)) JSStorageEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSStorageEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSStorageEventConstructor : public DOMConstructorObject {
private:
    JSStorageEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSStorageEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSStorageEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSStorageEventConstructor>(vm.heap)) JSStorageEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSStorageEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSStorageEventConstructor::constructJSStorageEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSStorageEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    StorageEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillStorageEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<StorageEvent> event = StorageEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillStorageEventInit(StorageEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("key", eventInit.key))
        return false;
    if (!dictionary.tryGetProperty("oldValue", eventInit.oldValue))
        return false;
    if (!dictionary.tryGetProperty("newValue", eventInit.newValue))
        return false;
    if (!dictionary.tryGetProperty("url", eventInit.url))
        return false;
    if (!dictionary.tryGetProperty("storageArea", eventInit.storageArea))
        return false;
    return true;
}

const ClassInfo JSStorageEventConstructor::s_info = { "StorageEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStorageEventConstructor) };

JSStorageEventConstructor::JSStorageEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSStorageEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSStorageEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("StorageEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSStorageEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSStorageEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSStorageEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "key", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageEventKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "oldValue", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageEventOldValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "newValue", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageEventNewValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "url", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageEventUrl), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "storageArea", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStorageEventStorageArea), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "initStorageEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStorageEventPrototypeFunctionInitStorageEvent), (intptr_t) (0) },
};

const ClassInfo JSStorageEventPrototype::s_info = { "StorageEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStorageEventPrototype) };

void JSStorageEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSStorageEventPrototypeTableValues, *this);
}

const ClassInfo JSStorageEvent::s_info = { "StorageEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSStorageEvent) };

JSStorageEvent::JSStorageEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<StorageEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSStorageEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSStorageEventPrototype::create(vm, globalObject, JSStorageEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSStorageEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStorageEvent>(vm, globalObject);
}

EncodedJSValue jsStorageEventKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSStorageEvent* castedThis = jsDynamicCast<JSStorageEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSStorageEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "StorageEvent", "key");
        return throwGetterTypeError(*exec, "StorageEvent", "key");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.key());
    return JSValue::encode(result);
}


EncodedJSValue jsStorageEventOldValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSStorageEvent* castedThis = jsDynamicCast<JSStorageEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSStorageEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "StorageEvent", "oldValue");
        return throwGetterTypeError(*exec, "StorageEvent", "oldValue");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringOrNull(exec, impl.oldValue());
    return JSValue::encode(result);
}


EncodedJSValue jsStorageEventNewValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSStorageEvent* castedThis = jsDynamicCast<JSStorageEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSStorageEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "StorageEvent", "newValue");
        return throwGetterTypeError(*exec, "StorageEvent", "newValue");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringOrNull(exec, impl.newValue());
    return JSValue::encode(result);
}


EncodedJSValue jsStorageEventUrl(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSStorageEvent* castedThis = jsDynamicCast<JSStorageEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSStorageEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "StorageEvent", "url");
        return throwGetterTypeError(*exec, "StorageEvent", "url");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.url());
    return JSValue::encode(result);
}


EncodedJSValue jsStorageEventStorageArea(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSStorageEvent* castedThis = jsDynamicCast<JSStorageEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSStorageEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "StorageEvent", "storageArea");
        return throwGetterTypeError(*exec, "StorageEvent", "storageArea");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.storageArea()));
    return JSValue::encode(result);
}


EncodedJSValue jsStorageEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSStorageEventPrototype* domObject = jsDynamicCast<JSStorageEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSStorageEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSStorageEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSStorageEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsStorageEventPrototypeFunctionInitStorageEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSStorageEvent* castedThis = jsDynamicCast<JSStorageEvent*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "StorageEvent", "initStorageEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStorageEvent::info());
    auto& impl = castedThis->impl();
    String typeArg = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool canBubbleArg = exec->argument(1).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool cancelableArg = exec->argument(2).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String keyArg = exec->argument(3).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String oldValueArg = valueToStringWithNullCheck(exec, exec->argument(4));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String newValueArg = valueToStringWithNullCheck(exec, exec->argument(5));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String urlArg = exec->argument(6).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    Storage* storageAreaArg = JSStorage::toWrapped(exec->argument(7));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.initStorageEvent(typeArg, canBubbleArg, cancelableArg, keyArg, oldValueArg, newValueArg, urlArg, storageAreaArg);
    return JSValue::encode(jsUndefined());
}


}
