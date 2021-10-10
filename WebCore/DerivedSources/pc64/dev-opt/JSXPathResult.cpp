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
#include "JSXPathResult.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "Node.h"
#include "URL.h"
#include "XPathResult.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsXPathResultPrototypeFunctionIterateNext(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXPathResultPrototypeFunctionSnapshotItem(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsXPathResultResultType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsXPathResultNumberValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsXPathResultStringValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsXPathResultBooleanValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsXPathResultSingleNodeValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsXPathResultInvalidIteratorState(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsXPathResultSnapshotLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsXPathResultConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSXPathResultPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSXPathResultPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXPathResultPrototype* ptr = new (NotNull, JSC::allocateCell<JSXPathResultPrototype>(vm.heap)) JSXPathResultPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSXPathResultPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSXPathResultConstructor : public DOMConstructorObject {
private:
    JSXPathResultConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXPathResultConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXPathResultConstructor* ptr = new (NotNull, JSC::allocateCell<JSXPathResultConstructor>(vm.heap)) JSXPathResultConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table for constructor */

static const HashTableValue JSXPathResultConstructorTableValues[] =
{
    { "ANY_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "NUMBER_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "STRING_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "BOOLEAN_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "UNORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "ORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "UNORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
    { "ORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(7), (intptr_t) (0) },
    { "ANY_UNORDERED_NODE_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(8), (intptr_t) (0) },
    { "FIRST_ORDERED_NODE_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(9), (intptr_t) (0) },
};


COMPILE_ASSERT(0 == XPathResult::ANY_TYPE, XPathResultEnumANY_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == XPathResult::NUMBER_TYPE, XPathResultEnumNUMBER_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == XPathResult::STRING_TYPE, XPathResultEnumSTRING_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == XPathResult::BOOLEAN_TYPE, XPathResultEnumBOOLEAN_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == XPathResult::UNORDERED_NODE_ITERATOR_TYPE, XPathResultEnumUNORDERED_NODE_ITERATOR_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == XPathResult::ORDERED_NODE_ITERATOR_TYPE, XPathResultEnumORDERED_NODE_ITERATOR_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == XPathResult::UNORDERED_NODE_SNAPSHOT_TYPE, XPathResultEnumUNORDERED_NODE_SNAPSHOT_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(7 == XPathResult::ORDERED_NODE_SNAPSHOT_TYPE, XPathResultEnumORDERED_NODE_SNAPSHOT_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(8 == XPathResult::ANY_UNORDERED_NODE_TYPE, XPathResultEnumANY_UNORDERED_NODE_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(9 == XPathResult::FIRST_ORDERED_NODE_TYPE, XPathResultEnumFIRST_ORDERED_NODE_TYPEIsWrongUseDoNotCheckConstants);

const ClassInfo JSXPathResultConstructor::s_info = { "XPathResultConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXPathResultConstructor) };

JSXPathResultConstructor::JSXPathResultConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSXPathResultConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSXPathResult::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("XPathResult"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSXPathResultConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSXPathResultPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "resultType", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultResultType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "numberValue", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultNumberValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "stringValue", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultStringValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "booleanValue", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultBooleanValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "singleNodeValue", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultSingleNodeValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "invalidIteratorState", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultInvalidIteratorState), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "snapshotLength", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathResultSnapshotLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "ANY_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "NUMBER_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "STRING_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "BOOLEAN_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "UNORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "ORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "UNORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
    { "ORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(7), (intptr_t) (0) },
    { "ANY_UNORDERED_NODE_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(8), (intptr_t) (0) },
    { "FIRST_ORDERED_NODE_TYPE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(9), (intptr_t) (0) },
    { "iterateNext", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathResultPrototypeFunctionIterateNext), (intptr_t) (0) },
    { "snapshotItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathResultPrototypeFunctionSnapshotItem), (intptr_t) (0) },
};

const ClassInfo JSXPathResultPrototype::s_info = { "XPathResultPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXPathResultPrototype) };

void JSXPathResultPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSXPathResultPrototypeTableValues, *this);
}

const ClassInfo JSXPathResult::s_info = { "XPathResult", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXPathResult) };

JSXPathResult::JSXPathResult(Structure* structure, JSDOMGlobalObject* globalObject, Ref<XPathResult>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSXPathResult::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSXPathResultPrototype::create(vm, globalObject, JSXPathResultPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSXPathResult::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathResult>(vm, globalObject);
}

void JSXPathResult::destroy(JSC::JSCell* cell)
{
    JSXPathResult* thisObject = static_cast<JSXPathResult*>(cell);
    thisObject->JSXPathResult::~JSXPathResult();
}

JSXPathResult::~JSXPathResult()
{
    releaseImpl();
}

EncodedJSValue jsXPathResultResultType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSXPathResultPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "XPathResult", "resultType");
        return throwGetterTypeError(*exec, "XPathResult", "resultType");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.resultType());
    return JSValue::encode(result);
}


EncodedJSValue jsXPathResultNumberValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSXPathResultPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "XPathResult", "numberValue");
        return throwGetterTypeError(*exec, "XPathResult", "numberValue");
    }
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.numberValue(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsXPathResultStringValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSXPathResultPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "XPathResult", "stringValue");
        return throwGetterTypeError(*exec, "XPathResult", "stringValue");
    }
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.stringValue(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsXPathResultBooleanValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSXPathResultPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "XPathResult", "booleanValue");
        return throwGetterTypeError(*exec, "XPathResult", "booleanValue");
    }
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.booleanValue(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsXPathResultSingleNodeValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSXPathResultPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "XPathResult", "singleNodeValue");
        return throwGetterTypeError(*exec, "XPathResult", "singleNodeValue");
    }
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.singleNodeValue(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsXPathResultInvalidIteratorState(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSXPathResultPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "XPathResult", "invalidIteratorState");
        return throwGetterTypeError(*exec, "XPathResult", "invalidIteratorState");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.invalidIteratorState());
    return JSValue::encode(result);
}


EncodedJSValue jsXPathResultSnapshotLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSXPathResultPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "XPathResult", "snapshotLength");
        return throwGetterTypeError(*exec, "XPathResult", "snapshotLength");
    }
    ExceptionCode ec = 0;
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.snapshotLength(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


EncodedJSValue jsXPathResultConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSXPathResultPrototype* domObject = jsDynamicCast<JSXPathResultPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSXPathResult::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSXPathResult::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXPathResultConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXPathResultPrototypeFunctionIterateNext(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XPathResult", "iterateNext");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathResult::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.iterateNext(ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXPathResultPrototypeFunctionSnapshotItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXPathResult* castedThis = jsDynamicCast<JSXPathResult*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XPathResult", "snapshotItem");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathResult::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.snapshotItem(index, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSXPathResult::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSXPathResult*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->visitAdditionalChildren(visitor);
}

bool JSXPathResultOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSXPathResultOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsXPathResult = jsCast<JSXPathResult*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsXPathResult->impl(), jsXPathResult);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, XPathResult* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSXPathResult>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to XPathResult.
    COMPILE_ASSERT(!__is_polymorphic(XPathResult), XPathResult_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSXPathResult>(globalObject, impl);
}

XPathResult* JSXPathResult::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSXPathResult*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
