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
#include "JSSVGEllipseElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "SVGEllipseElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGEllipseElementCx(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGEllipseElementCy(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGEllipseElementRx(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGEllipseElementRy(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGEllipseElementExternalResourcesRequired(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGEllipseElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGEllipseElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGEllipseElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGEllipseElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGEllipseElementPrototype>(vm.heap)) JSSVGEllipseElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGEllipseElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGEllipseElementConstructor : public DOMConstructorObject {
private:
    JSSVGEllipseElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGEllipseElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGEllipseElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGEllipseElementConstructor>(vm.heap)) JSSVGEllipseElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGEllipseElementConstructor::s_info = { "SVGEllipseElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGEllipseElementConstructor) };

JSSVGEllipseElementConstructor::JSSVGEllipseElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGEllipseElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGEllipseElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGEllipseElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGEllipseElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "cx", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementCx), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "cy", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementCy), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "rx", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRx), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "ry", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementRy), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGEllipseElementExternalResourcesRequired), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGEllipseElementPrototype::s_info = { "SVGEllipseElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGEllipseElementPrototype) };

void JSSVGEllipseElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGEllipseElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGEllipseElement::s_info = { "SVGEllipseElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGEllipseElement) };

JSSVGEllipseElement::JSSVGEllipseElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGEllipseElement>&& impl)
    : JSSVGGraphicsElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGEllipseElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGEllipseElementPrototype::create(vm, globalObject, JSSVGEllipseElementPrototype::createStructure(vm, globalObject, JSSVGGraphicsElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGEllipseElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGEllipseElement>(vm, globalObject);
}

EncodedJSValue jsSVGEllipseElementCx(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGEllipseElement* castedThis = jsDynamicCast<JSSVGEllipseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGEllipseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGEllipseElement", "cx");
        return throwGetterTypeError(*exec, "SVGEllipseElement", "cx");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.cxAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGEllipseElementCy(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGEllipseElement* castedThis = jsDynamicCast<JSSVGEllipseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGEllipseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGEllipseElement", "cy");
        return throwGetterTypeError(*exec, "SVGEllipseElement", "cy");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.cyAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGEllipseElementRx(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGEllipseElement* castedThis = jsDynamicCast<JSSVGEllipseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGEllipseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGEllipseElement", "rx");
        return throwGetterTypeError(*exec, "SVGEllipseElement", "rx");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.rxAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGEllipseElementRy(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGEllipseElement* castedThis = jsDynamicCast<JSSVGEllipseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGEllipseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGEllipseElement", "ry");
        return throwGetterTypeError(*exec, "SVGEllipseElement", "ry");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.ryAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGEllipseElementExternalResourcesRequired(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGEllipseElement* castedThis = jsDynamicCast<JSSVGEllipseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGEllipseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGEllipseElement", "externalResourcesRequired");
        return throwGetterTypeError(*exec, "SVGEllipseElement", "externalResourcesRequired");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.externalResourcesRequiredAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGEllipseElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGEllipseElementPrototype* domObject = jsDynamicCast<JSSVGEllipseElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGEllipseElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGEllipseElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGEllipseElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}