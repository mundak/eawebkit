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
#include "JSXPathEvaluator.h"

#include "ExceptionCode.h"
#include "JSCustomXPathNSResolver.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSXPathExpression.h"
#include "JSXPathNSResolver.h"
#include "JSXPathResult.h"
#include "XPathEvaluator.h"
#include "XPathExpression.h"
#include "XPathNSResolver.h"
#include "XPathResult.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateExpression(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateNSResolver(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionEvaluate(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsXPathEvaluatorConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSXPathEvaluatorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSXPathEvaluatorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXPathEvaluatorPrototype* ptr = new (NotNull, JSC::allocateCell<JSXPathEvaluatorPrototype>(vm.heap)) JSXPathEvaluatorPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSXPathEvaluatorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSXPathEvaluatorConstructor : public DOMConstructorObject {
private:
    JSXPathEvaluatorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXPathEvaluatorConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXPathEvaluatorConstructor* ptr = new (NotNull, JSC::allocateCell<JSXPathEvaluatorConstructor>(vm.heap)) JSXPathEvaluatorConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSXPathEvaluator(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSXPathEvaluatorConstructor::constructJSXPathEvaluator(ExecState* exec)
{
    auto* castedThis = jsCast<JSXPathEvaluatorConstructor*>(exec->callee());
    RefPtr<XPathEvaluator> object = XPathEvaluator::create();
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSXPathEvaluatorConstructor::s_info = { "XPathEvaluatorConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXPathEvaluatorConstructor) };

JSXPathEvaluatorConstructor::JSXPathEvaluatorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSXPathEvaluatorConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSXPathEvaluator::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("XPathEvaluator"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

ConstructType JSXPathEvaluatorConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSXPathEvaluator;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSXPathEvaluatorPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathEvaluatorConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "createExpression", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionCreateExpression), (intptr_t) (0) },
    { "createNSResolver", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionCreateNSResolver), (intptr_t) (0) },
    { "evaluate", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionEvaluate), (intptr_t) (0) },
};

const ClassInfo JSXPathEvaluatorPrototype::s_info = { "XPathEvaluatorPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXPathEvaluatorPrototype) };

void JSXPathEvaluatorPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSXPathEvaluatorPrototypeTableValues, *this);
}

const ClassInfo JSXPathEvaluator::s_info = { "XPathEvaluator", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXPathEvaluator) };

JSXPathEvaluator::JSXPathEvaluator(Structure* structure, JSDOMGlobalObject* globalObject, Ref<XPathEvaluator>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSXPathEvaluator::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSXPathEvaluatorPrototype::create(vm, globalObject, JSXPathEvaluatorPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSXPathEvaluator::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathEvaluator>(vm, globalObject);
}

void JSXPathEvaluator::destroy(JSC::JSCell* cell)
{
    JSXPathEvaluator* thisObject = static_cast<JSXPathEvaluator*>(cell);
    thisObject->JSXPathEvaluator::~JSXPathEvaluator();
}

JSXPathEvaluator::~JSXPathEvaluator()
{
    releaseImpl();
}

EncodedJSValue jsXPathEvaluatorConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSXPathEvaluatorPrototype* domObject = jsDynamicCast<JSXPathEvaluatorPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSXPathEvaluator::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSXPathEvaluator::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXPathEvaluatorConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateExpression(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXPathEvaluator* castedThis = jsDynamicCast<JSXPathEvaluator*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XPathEvaluator", "createExpression");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathEvaluator::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String expression = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<XPathNSResolver> customResolver;
    XPathNSResolver* resolver = JSXPathNSResolver::toWrapped(exec->argument(1));
    if (!resolver) {
        customResolver = JSCustomXPathNSResolver::create(exec, exec->argument(1));
        if (UNLIKELY(exec->hadException()))
            return JSValue::encode(jsUndefined());
        resolver = customResolver.get();
    }
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.createExpression(expression, resolver, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateNSResolver(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXPathEvaluator* castedThis = jsDynamicCast<JSXPathEvaluator*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XPathEvaluator", "createNSResolver");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathEvaluator::info());
    auto& impl = castedThis->impl();
    Node* nodeResolver = JSNode::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.createNSResolver(nodeResolver)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionEvaluate(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXPathEvaluator* castedThis = jsDynamicCast<JSXPathEvaluator*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XPathEvaluator", "evaluate");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathEvaluator::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String expression = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    Node* contextNode = JSNode::toWrapped(exec->argument(1));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<XPathNSResolver> customResolver;
    XPathNSResolver* resolver = JSXPathNSResolver::toWrapped(exec->argument(2));
    if (!resolver) {
        customResolver = JSCustomXPathNSResolver::create(exec, exec->argument(2));
        if (UNLIKELY(exec->hadException()))
            return JSValue::encode(jsUndefined());
        resolver = customResolver.get();
    }
    uint16_t type = toUInt16(exec, exec->argument(3), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    XPathResult* inResult = JSXPathResult::toWrapped(exec->argument(4));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.evaluate(expression, contextNode, resolver, type, inResult, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

bool JSXPathEvaluatorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSXPathEvaluatorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsXPathEvaluator = jsCast<JSXPathEvaluator*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsXPathEvaluator->impl(), jsXPathEvaluator);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, XPathEvaluator* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSXPathEvaluator>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to XPathEvaluator.
    COMPILE_ASSERT(!__is_polymorphic(XPathEvaluator), XPathEvaluator_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSXPathEvaluator>(globalObject, impl);
}

XPathEvaluator* JSXPathEvaluator::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSXPathEvaluator*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
