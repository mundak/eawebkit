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

#include "JSWebGLShader.h"

#include "JSDOMBinding.h"
#include "WebGLShader.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWebGLShaderConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebGLShaderPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebGLShaderPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLShaderPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLShaderPrototype>(vm.heap)) JSWebGLShaderPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebGLShaderPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebGLShaderConstructor : public DOMConstructorObject {
private:
    JSWebGLShaderConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLShaderConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLShaderConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebGLShaderConstructor>(vm.heap)) JSWebGLShaderConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSWebGLShaderConstructor::s_info = { "WebGLShaderConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLShaderConstructor) };

JSWebGLShaderConstructor::JSWebGLShaderConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLShaderConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebGLShader::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebGLShader"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSWebGLShaderPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLShaderConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSWebGLShaderPrototype::s_info = { "WebGLShaderPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLShaderPrototype) };

void JSWebGLShaderPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebGLShaderPrototypeTableValues, *this);
}

const ClassInfo JSWebGLShader::s_info = { "WebGLShader", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLShader) };

JSWebGLShader::JSWebGLShader(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebGLShader>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSWebGLShader::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLShaderPrototype::create(vm, globalObject, JSWebGLShaderPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSWebGLShader::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLShader>(vm, globalObject);
}

void JSWebGLShader::destroy(JSC::JSCell* cell)
{
    JSWebGLShader* thisObject = static_cast<JSWebGLShader*>(cell);
    thisObject->JSWebGLShader::~JSWebGLShader();
}

JSWebGLShader::~JSWebGLShader()
{
    releaseImpl();
}

EncodedJSValue jsWebGLShaderConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebGLShaderPrototype* domObject = jsDynamicCast<JSWebGLShaderPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebGLShader::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebGLShader::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLShaderConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSWebGLShaderOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebGLShaderOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsWebGLShader = jsCast<JSWebGLShader*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebGLShader->impl(), jsWebGLShader);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLShader@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11WebGLShaderE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, WebGLShader* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLShader>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLShader@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11WebGLShaderE[2];
#if COMPILER(CLANG)
    // If this fails WebGLShader does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLShader), WebGLShader_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLShader has subclasses. If WebGLShader has subclasses that get passed
    // to toJS() we currently require WebGLShader you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSWebGLShader>(globalObject, impl);
}

WebGLShader* JSWebGLShader::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSWebGLShader*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
