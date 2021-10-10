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
#include "JSSVGFEConvolveMatrixElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedNumberList.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEConvolveMatrixElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGFEConvolveMatrixElementIn1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementOrderX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementOrderY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementKernelMatrix(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementDivisor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementBias(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementTargetX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementTargetY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementEdgeMode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementKernelUnitLengthX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementKernelUnitLengthY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementPreserveAlpha(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementResult(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEConvolveMatrixElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGFEConvolveMatrixElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGFEConvolveMatrixElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFEConvolveMatrixElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFEConvolveMatrixElementPrototype>(vm.heap)) JSSVGFEConvolveMatrixElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGFEConvolveMatrixElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGFEConvolveMatrixElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEConvolveMatrixElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEConvolveMatrixElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEConvolveMatrixElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFEConvolveMatrixElementConstructor>(vm.heap)) JSSVGFEConvolveMatrixElementConstructor(structure, globalObject);
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

static const HashTableValue JSSVGFEConvolveMatrixElementConstructorTableValues[] =
{
    { "SVG_EDGEMODE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_EDGEMODE_DUPLICATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_EDGEMODE_WRAP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_EDGEMODE_NONE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
};

const ClassInfo JSSVGFEConvolveMatrixElementConstructor::s_info = { "SVGFEConvolveMatrixElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEConvolveMatrixElementConstructor) };

JSSVGFEConvolveMatrixElementConstructor::JSSVGFEConvolveMatrixElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEConvolveMatrixElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEConvolveMatrixElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGFEConvolveMatrixElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSSVGFEConvolveMatrixElementConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEConvolveMatrixElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "in1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementIn1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "orderX", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementOrderX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "orderY", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementOrderY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "kernelMatrix", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelMatrix), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "divisor", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementDivisor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "bias", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementBias), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "targetX", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementTargetX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "targetY", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementTargetY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "edgeMode", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementEdgeMode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "kernelUnitLengthX", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelUnitLengthX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "kernelUnitLengthY", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementKernelUnitLengthY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "preserveAlpha", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementPreserveAlpha), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "result", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEConvolveMatrixElementResult), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "SVG_EDGEMODE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_EDGEMODE_DUPLICATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_EDGEMODE_WRAP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_EDGEMODE_NONE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
};

const ClassInfo JSSVGFEConvolveMatrixElementPrototype::s_info = { "SVGFEConvolveMatrixElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEConvolveMatrixElementPrototype) };

void JSSVGFEConvolveMatrixElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGFEConvolveMatrixElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGFEConvolveMatrixElement::s_info = { "SVGFEConvolveMatrixElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEConvolveMatrixElement) };

JSSVGFEConvolveMatrixElement::JSSVGFEConvolveMatrixElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGFEConvolveMatrixElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGFEConvolveMatrixElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEConvolveMatrixElementPrototype::create(vm, globalObject, JSSVGFEConvolveMatrixElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGFEConvolveMatrixElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEConvolveMatrixElement>(vm, globalObject);
}

EncodedJSValue jsSVGFEConvolveMatrixElementIn1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "in1");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "in1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementOrderX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "orderX");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "orderX");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedInteger> obj = impl.orderXAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementOrderY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "orderY");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "orderY");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedInteger> obj = impl.orderYAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementKernelMatrix(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "kernelMatrix");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "kernelMatrix");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumberList> obj = impl.kernelMatrixAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementDivisor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "divisor");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "divisor");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.divisorAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementBias(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "bias");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "bias");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.biasAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementTargetX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "targetX");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "targetX");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedInteger> obj = impl.targetXAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementTargetY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "targetY");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "targetY");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedInteger> obj = impl.targetYAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementEdgeMode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "edgeMode");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "edgeMode");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.edgeModeAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementKernelUnitLengthX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "kernelUnitLengthX");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "kernelUnitLengthX");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.kernelUnitLengthXAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementKernelUnitLengthY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "kernelUnitLengthY");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "kernelUnitLengthY");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.kernelUnitLengthYAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementPreserveAlpha(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "preserveAlpha");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "preserveAlpha");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.preserveAlphaAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "x");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "x");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "y");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "y");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "width");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "width");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "height");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "height");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementResult(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEConvolveMatrixElement* castedThis = jsDynamicCast<JSSVGFEConvolveMatrixElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEConvolveMatrixElement", "result");
        return throwGetterTypeError(*exec, "SVGFEConvolveMatrixElement", "result");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEConvolveMatrixElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGFEConvolveMatrixElementPrototype* domObject = jsDynamicCast<JSSVGFEConvolveMatrixElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFEConvolveMatrixElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFEConvolveMatrixElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEConvolveMatrixElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
