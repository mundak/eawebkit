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
#include "JSMessagePort.h"

#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "MessagePort.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionPostMessage(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionStart(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionClose(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionDispatchEvent(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsMessagePortOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSMessagePortOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsMessagePortConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMessagePortPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMessagePortPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMessagePortPrototype* ptr = new (NotNull, JSC::allocateCell<JSMessagePortPrototype>(vm.heap)) JSMessagePortPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMessagePortPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMessagePortConstructor : public DOMConstructorObject {
private:
    JSMessagePortConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMessagePortConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMessagePortConstructor* ptr = new (NotNull, JSC::allocateCell<JSMessagePortConstructor>(vm.heap)) JSMessagePortConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSMessagePortConstructor::s_info = { "MessagePortConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMessagePortConstructor) };

JSMessagePortConstructor::JSMessagePortConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMessagePortConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMessagePort::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("MessagePort"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSMessagePortPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMessagePortConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "onmessage", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMessagePortOnmessage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSMessagePortOnmessage) },
    { "postMessage", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMessagePortPrototypeFunctionPostMessage), (intptr_t) (1) },
    { "start", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMessagePortPrototypeFunctionStart), (intptr_t) (0) },
    { "close", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMessagePortPrototypeFunctionClose), (intptr_t) (0) },
    { "addEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMessagePortPrototypeFunctionAddEventListener), (intptr_t) (2) },
    { "removeEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMessagePortPrototypeFunctionRemoveEventListener), (intptr_t) (2) },
    { "dispatchEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMessagePortPrototypeFunctionDispatchEvent), (intptr_t) (1) },
};

const ClassInfo JSMessagePortPrototype::s_info = { "MessagePortPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMessagePortPrototype) };

void JSMessagePortPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMessagePortPrototypeTableValues, *this);
}

const ClassInfo JSMessagePort::s_info = { "MessagePort", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMessagePort) };

JSMessagePort::JSMessagePort(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MessagePort>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSMessagePort::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMessagePortPrototype::create(vm, globalObject, JSMessagePortPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSMessagePort::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMessagePort>(vm, globalObject);
}

void JSMessagePort::destroy(JSC::JSCell* cell)
{
    JSMessagePort* thisObject = static_cast<JSMessagePort*>(cell);
    thisObject->JSMessagePort::~JSMessagePort();
}

JSMessagePort::~JSMessagePort()
{
    releaseImpl();
}

EncodedJSValue jsMessagePortOnmessage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMessagePortPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MessagePort", "onmessage");
        return throwGetterTypeError(*exec, "MessagePort", "onmessage");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().messageEvent));
}


EncodedJSValue jsMessagePortConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMessagePortPrototype* domObject = jsDynamicCast<JSMessagePortPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMessagePort::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSMessagePortOnmessage(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMessagePortPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "MessagePort", "onmessage");
        else
            throwSetterTypeError(*exec, "MessagePort", "onmessage");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().messageEvent, value);
}


JSValue JSMessagePort::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMessagePortConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionPostMessage(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MessagePort", "postMessage");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMessagePort::info());
    return JSValue::encode(castedThis->postMessage(exec));
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionStart(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MessagePort", "start");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMessagePort::info());
    auto& impl = castedThis->impl();
    impl.start();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MessagePort", "close");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMessagePort::info());
    auto& impl = castedThis->impl();
    impl.close();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MessagePort", "addEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMessagePort::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForAdd(*exec, *asObject(listener), *castedThis), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MessagePort", "removeEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMessagePort::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForRemove(*exec, *asObject(listener), *castedThis).ptr(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMessagePort* castedThis = jsDynamicCast<JSMessagePort*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MessagePort", "dispatchEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMessagePort::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event = JSEvent::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsBoolean(impl.dispatchEvent(event, ec));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSMessagePort::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSMessagePort*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
    thisObject->visitAdditionalChildren(visitor);
}

bool JSMessagePortOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsMessagePort = jsCast<JSMessagePort*>(handle.slot()->asCell());
    if (jsMessagePort->impl().hasPendingActivity())
        return true;
    if (jsMessagePort->impl().isFiringEventListeners())
        return true;
    MessagePort* root = &jsMessagePort->impl();
    return visitor.containsOpaqueRoot(root);
}

void JSMessagePortOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsMessagePort = jsCast<JSMessagePort*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMessagePort->impl(), jsMessagePort);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MessagePort@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11MessagePortE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, MessagePort* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMessagePort>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MessagePort@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11MessagePortE[2];
#if COMPILER(CLANG)
    // If this fails MessagePort does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(MessagePort), MessagePort_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // MessagePort has subclasses. If MessagePort has subclasses that get passed
    // to toJS() we currently require MessagePort you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSMessagePort>(globalObject, impl);
}

MessagePort* JSMessagePort::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSMessagePort*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
