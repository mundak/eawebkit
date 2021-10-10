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
#include "JSSVGFECompositeElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFECompositeElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGFECompositeElementIn1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementIn2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementOperator(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementK1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementK2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementK3(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementK4(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementResult(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFECompositeElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGFECompositeElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGFECompositeElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFECompositeElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFECompositeElementPrototype>(vm.heap)) JSSVGFECompositeElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGFECompositeElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGFECompositeElementConstructor : public DOMConstructorObject {
private:
    JSSVGFECompositeElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFECompositeElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFECompositeElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFECompositeElementConstructor>(vm.heap)) JSSVGFECompositeElementConstructor(structure, globalObject);
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

static const HashTableValue JSSVGFECompositeElementConstructorTableValues[] =
{
    { "SVG_FECOMPOSITE_OPERATOR_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_OVER", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_IN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_OUT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_ATOP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_XOR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_ARITHMETIC", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
};

const ClassInfo JSSVGFECompositeElementConstructor::s_info = { "SVGFECompositeElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFECompositeElementConstructor) };

JSSVGFECompositeElementConstructor::JSSVGFECompositeElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFECompositeElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFECompositeElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGFECompositeElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSSVGFECompositeElementConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFECompositeElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "in1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementIn1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "in2", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementIn2), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "operator", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementOperator), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "k1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementK1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "k2", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementK2), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "k3", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementK3), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "k4", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementK4), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "result", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFECompositeElementResult), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "SVG_FECOMPOSITE_OPERATOR_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_OVER", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_IN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_OUT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_ATOP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_XOR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "SVG_FECOMPOSITE_OPERATOR_ARITHMETIC", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
};

const ClassInfo JSSVGFECompositeElementPrototype::s_info = { "SVGFECompositeElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFECompositeElementPrototype) };

void JSSVGFECompositeElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGFECompositeElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGFECompositeElement::s_info = { "SVGFECompositeElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFECompositeElement) };

JSSVGFECompositeElement::JSSVGFECompositeElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGFECompositeElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGFECompositeElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFECompositeElementPrototype::create(vm, globalObject, JSSVGFECompositeElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGFECompositeElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFECompositeElement>(vm, globalObject);
}

EncodedJSValue jsSVGFECompositeElementIn1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "in1");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "in1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementIn2(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "in2");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "in2");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in2Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementOperator(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "operator");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "operator");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.svgOperatorAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementK1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "k1");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "k1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.k1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementK2(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "k2");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "k2");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.k2Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementK3(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "k3");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "k3");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.k3Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementK4(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "k4");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "k4");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.k4Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "x");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "x");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "y");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "y");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "width");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "width");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "height");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "height");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementResult(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFECompositeElement* castedThis = jsDynamicCast<JSSVGFECompositeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFECompositeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFECompositeElement", "result");
        return throwGetterTypeError(*exec, "SVGFECompositeElement", "result");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFECompositeElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGFECompositeElementPrototype* domObject = jsDynamicCast<JSSVGFECompositeElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFECompositeElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFECompositeElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFECompositeElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}