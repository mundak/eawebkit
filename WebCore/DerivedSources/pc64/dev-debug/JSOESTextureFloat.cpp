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

#include "JSOESTextureFloat.h"

#include "JSDOMBinding.h"
#include "OESTextureFloat.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

class JSOESTextureFloatPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSOESTextureFloatPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSOESTextureFloatPrototype* ptr = new (NotNull, JSC::allocateCell<JSOESTextureFloatPrototype>(vm.heap)) JSOESTextureFloatPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSOESTextureFloatPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSOESTextureFloatPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

const ClassInfo JSOESTextureFloatPrototype::s_info = { "OESTextureFloatPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESTextureFloatPrototype) };

void JSOESTextureFloatPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSOESTextureFloatPrototypeTableValues, *this);
}

const ClassInfo JSOESTextureFloat::s_info = { "OESTextureFloat", &Base::s_info, 0, CREATE_METHOD_TABLE(JSOESTextureFloat) };

JSOESTextureFloat::JSOESTextureFloat(Structure* structure, JSDOMGlobalObject* globalObject, Ref<OESTextureFloat>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSOESTextureFloat::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSOESTextureFloatPrototype::create(vm, globalObject, JSOESTextureFloatPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSOESTextureFloat::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSOESTextureFloat>(vm, globalObject);
}

void JSOESTextureFloat::destroy(JSC::JSCell* cell)
{
    JSOESTextureFloat* thisObject = static_cast<JSOESTextureFloat*>(cell);
    thisObject->JSOESTextureFloat::~JSOESTextureFloat();
}

JSOESTextureFloat::~JSOESTextureFloat()
{
    releaseImpl();
}

bool JSOESTextureFloatOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsOESTextureFloat = jsCast<JSOESTextureFloat*>(handle.slot()->asCell());
    WebGLRenderingContextBase* root = WTF::getPtr(jsOESTextureFloat->impl().context());
    return visitor.containsOpaqueRoot(root);
}

void JSOESTextureFloatOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsOESTextureFloat = jsCast<JSOESTextureFloat*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsOESTextureFloat->impl(), jsOESTextureFloat);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7OESTextureFloat@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15OESTextureFloatE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, OESTextureFloat* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSOESTextureFloat>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7OESTextureFloat@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15OESTextureFloatE[2];
#if COMPILER(CLANG)
    // If this fails OESTextureFloat does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(OESTextureFloat), OESTextureFloat_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // OESTextureFloat has subclasses. If OESTextureFloat has subclasses that get passed
    // to toJS() we currently require OESTextureFloat you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSOESTextureFloat>(globalObject, impl);
}

OESTextureFloat* JSOESTextureFloat::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSOESTextureFloat*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)