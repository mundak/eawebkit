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

#if ENABLE(WEBGL)

#include "JSOESVertexArrayObject.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSWebGLVertexArrayObjectOES.h"
#include "OESVertexArrayObject.h"
#include "WebGLVertexArrayObjectOES.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionCreateVertexArrayOES(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionDeleteVertexArrayOES(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionIsVertexArrayOES(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionBindVertexArrayOES(JSC::ExecState*);

class JSOESVertexArrayObjectPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSOESVertexArrayObjectPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSOESVertexArrayObjectPrototype* ptr = new (NotNull, JSC::allocateCell<JSOESVertexArrayObjectPrototype>(vm.heap)) JSOESVertexArrayObjectPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSOESVertexArrayObjectPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSOESVertexArrayObjectPrototypeTableValues[] =
{
    { "VERTEX_ARRAY_BINDING_OES", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0x85B5), (intptr_t) (0) },
    { "createVertexArrayOES", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsOESVertexArrayObjectPrototypeFunctionCreateVertexArrayOES), (intptr_t) (0) },
    { "deleteVertexArrayOES", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsOESVertexArrayObjectPrototypeFunctionDeleteVertexArrayOES), (intptr_t) (0) },
    { "isVertexArrayOES", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsOESVertexArrayObjectPrototypeFunctionIsVertexArrayOES), (intptr_t) (0) },
    { "bindVertexArrayOES", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsOESVertexArrayObjectPrototypeFunctionBindVertexArrayOES), (intptr_t) (0) },
};

const ClassInfo JSOESVertexArrayObjectPrototype::s_info = { "OESVertexArrayObjectPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESVertexArrayObjectPrototype) };

void JSOESVertexArrayObjectPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSOESVertexArrayObjectPrototypeTableValues, *this);
}

const ClassInfo JSOESVertexArrayObject::s_info = { "OESVertexArrayObject", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESVertexArrayObject) };

JSOESVertexArrayObject::JSOESVertexArrayObject(Structure* structure, JSDOMGlobalObject* globalObject, Ref<OESVertexArrayObject>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSOESVertexArrayObject::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSOESVertexArrayObjectPrototype::create(vm, globalObject, JSOESVertexArrayObjectPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSOESVertexArrayObject::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSOESVertexArrayObject>(vm, globalObject);
}

void JSOESVertexArrayObject::destroy(JSC::JSCell* cell)
{
    JSOESVertexArrayObject* thisObject = static_cast<JSOESVertexArrayObject*>(cell);
    thisObject->JSOESVertexArrayObject::~JSOESVertexArrayObject();
}

JSOESVertexArrayObject::~JSOESVertexArrayObject()
{
    releaseImpl();
}

EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionCreateVertexArrayOES(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSOESVertexArrayObject* castedThis = jsDynamicCast<JSOESVertexArrayObject*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "OESVertexArrayObject", "createVertexArrayOES");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSOESVertexArrayObject::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.createVertexArrayOES()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionDeleteVertexArrayOES(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSOESVertexArrayObject* castedThis = jsDynamicCast<JSOESVertexArrayObject*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "OESVertexArrayObject", "deleteVertexArrayOES");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSOESVertexArrayObject::info());
    auto& impl = castedThis->impl();
    if (!exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSWebGLVertexArrayObjectOES::info()))
        return throwArgumentTypeError(*exec, 0, "arrayObject", "OESVertexArrayObject", "deleteVertexArrayOES", "WebGLVertexArrayObjectOES");
    WebGLVertexArrayObjectOES* arrayObject = JSWebGLVertexArrayObjectOES::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.deleteVertexArrayOES(arrayObject);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionIsVertexArrayOES(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSOESVertexArrayObject* castedThis = jsDynamicCast<JSOESVertexArrayObject*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "OESVertexArrayObject", "isVertexArrayOES");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSOESVertexArrayObject::info());
    auto& impl = castedThis->impl();
    if (!exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSWebGLVertexArrayObjectOES::info()))
        return throwArgumentTypeError(*exec, 0, "arrayObject", "OESVertexArrayObject", "isVertexArrayOES", "WebGLVertexArrayObjectOES");
    WebGLVertexArrayObjectOES* arrayObject = JSWebGLVertexArrayObjectOES::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsBoolean(impl.isVertexArrayOES(arrayObject));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsOESVertexArrayObjectPrototypeFunctionBindVertexArrayOES(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSOESVertexArrayObject* castedThis = jsDynamicCast<JSOESVertexArrayObject*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "OESVertexArrayObject", "bindVertexArrayOES");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSOESVertexArrayObject::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    if (!exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSWebGLVertexArrayObjectOES::info()))
        return throwArgumentTypeError(*exec, 0, "arrayObject", "OESVertexArrayObject", "bindVertexArrayOES", "WebGLVertexArrayObjectOES");
    WebGLVertexArrayObjectOES* arrayObject = JSWebGLVertexArrayObjectOES::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.bindVertexArrayOES(arrayObject, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

bool JSOESVertexArrayObjectOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsOESVertexArrayObject = jsCast<JSOESVertexArrayObject*>(handle.slot()->asCell());
    WebGLRenderingContextBase* root = WTF::getPtr(jsOESVertexArrayObject->impl().context());
    return visitor.containsOpaqueRoot(root);
}

void JSOESVertexArrayObjectOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsOESVertexArrayObject = jsCast<JSOESVertexArrayObject*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsOESVertexArrayObject->impl(), jsOESVertexArrayObject);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7OESVertexArrayObject@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore20OESVertexArrayObjectE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, OESVertexArrayObject* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSOESVertexArrayObject>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7OESVertexArrayObject@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore20OESVertexArrayObjectE[2];
#if COMPILER(CLANG)
    // If this fails OESVertexArrayObject does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(OESVertexArrayObject), OESVertexArrayObject_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // OESVertexArrayObject has subclasses. If OESVertexArrayObject has subclasses that get passed
    // to toJS() we currently require OESVertexArrayObject you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSOESVertexArrayObject>(globalObject, impl);
}

OESVertexArrayObject* JSOESVertexArrayObject::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSOESVertexArrayObject*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
