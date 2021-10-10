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
#include "JSSVGUseElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGUseElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGUseElementX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGUseElementY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGUseElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGUseElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGUseElementExternalResourcesRequired(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGUseElementHref(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGUseElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGUseElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGUseElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGUseElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGUseElementPrototype>(vm.heap)) JSSVGUseElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGUseElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGUseElementConstructor : public DOMConstructorObject {
private:
    JSSVGUseElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGUseElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGUseElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGUseElementConstructor>(vm.heap)) JSSVGUseElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGUseElementConstructor::s_info = { "SVGUseElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGUseElementConstructor) };

JSSVGUseElementConstructor::JSSVGUseElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGUseElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGUseElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGUseElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGUseElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementExternalResourcesRequired), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "href", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementHref), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGUseElementPrototype::s_info = { "SVGUseElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGUseElementPrototype) };

void JSSVGUseElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGUseElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGUseElement::s_info = { "SVGUseElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGUseElement) };

JSSVGUseElement::JSSVGUseElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGUseElement>&& impl)
    : JSSVGGraphicsElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGUseElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGUseElementPrototype::create(vm, globalObject, JSSVGUseElementPrototype::createStructure(vm, globalObject, JSSVGGraphicsElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGUseElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGUseElement>(vm, globalObject);
}

EncodedJSValue jsSVGUseElementX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGUseElement* castedThis = jsDynamicCast<JSSVGUseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGUseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGUseElement", "x");
        return throwGetterTypeError(*exec, "SVGUseElement", "x");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGUseElementY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGUseElement* castedThis = jsDynamicCast<JSSVGUseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGUseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGUseElement", "y");
        return throwGetterTypeError(*exec, "SVGUseElement", "y");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGUseElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGUseElement* castedThis = jsDynamicCast<JSSVGUseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGUseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGUseElement", "width");
        return throwGetterTypeError(*exec, "SVGUseElement", "width");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGUseElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGUseElement* castedThis = jsDynamicCast<JSSVGUseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGUseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGUseElement", "height");
        return throwGetterTypeError(*exec, "SVGUseElement", "height");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGUseElementExternalResourcesRequired(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGUseElement* castedThis = jsDynamicCast<JSSVGUseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGUseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGUseElement", "externalResourcesRequired");
        return throwGetterTypeError(*exec, "SVGUseElement", "externalResourcesRequired");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.externalResourcesRequiredAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGUseElementHref(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGUseElement* castedThis = jsDynamicCast<JSSVGUseElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGUseElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGUseElement", "href");
        return throwGetterTypeError(*exec, "SVGUseElement", "href");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.hrefAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGUseElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGUseElementPrototype* domObject = jsDynamicCast<JSSVGUseElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGUseElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGUseElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGUseElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
