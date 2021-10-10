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
#include "JSHTMLAreaElement.h"

#include "DOMTokenList.h"
#include "HTMLAreaElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSDOMTokenList.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsHTMLAreaElementAlt(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementAlt(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementCoords(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementCoords(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementHref(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementHref(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementNoHref(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementNoHref(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementPing(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementPing(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementRel(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementRel(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementShape(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementShape(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLAreaElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLAreaElementHash(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementHost(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementHostname(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementPathname(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementPort(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementProtocol(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementSearch(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementRelList(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLAreaElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLAreaElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLAreaElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLAreaElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLAreaElementPrototype>(vm.heap)) JSHTMLAreaElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLAreaElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLAreaElementConstructor : public DOMConstructorObject {
private:
    JSHTMLAreaElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLAreaElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLAreaElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLAreaElementConstructor>(vm.heap)) JSHTMLAreaElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLAreaElementConstructor::s_info = { "HTMLAreaElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLAreaElementConstructor) };

JSHTMLAreaElementConstructor::JSHTMLAreaElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLAreaElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLAreaElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLAreaElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLAreaElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "alt", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementAlt), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementAlt) },
    { "coords", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementCoords), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementCoords) },
    { "href", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementHref), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementHref) },
    { "noHref", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementNoHref), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementNoHref) },
    { "ping", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementPing), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementPing) },
    { "rel", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementRel), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementRel) },
    { "shape", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementShape), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementShape) },
    { "target", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementTarget), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLAreaElementTarget) },
    { "hash", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementHash), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "host", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementHost), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "hostname", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementHostname), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "pathname", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementPathname), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "port", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementPort), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "protocol", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementProtocol), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "search", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementSearch), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "relList", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAreaElementRelList), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSHTMLAreaElementPrototype::s_info = { "HTMLAreaElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLAreaElementPrototype) };

void JSHTMLAreaElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLAreaElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLAreaElement::s_info = { "HTMLAreaElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLAreaElement) };

JSHTMLAreaElement::JSHTMLAreaElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLAreaElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLAreaElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLAreaElementPrototype::create(vm, globalObject, JSHTMLAreaElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLAreaElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLAreaElement>(vm, globalObject);
}

EncodedJSValue jsHTMLAreaElementAlt(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "alt");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "alt");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::altAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementCoords(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "coords");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "coords");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::coordsAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementHref(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "href");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "href");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getURLAttribute(WebCore::HTMLNames::hrefAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementNoHref(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "noHref");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "noHref");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::nohrefAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementPing(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "ping");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "ping");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::pingAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementRel(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "rel");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "rel");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::relAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementShape(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "shape");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "shape");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::shapeAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementTarget(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "target");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "target");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::targetAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementHash(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "hash");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "hash");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hash());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementHost(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "host");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "host");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.host());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementHostname(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "hostname");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "hostname");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hostname());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementPathname(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "pathname");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "pathname");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pathname());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementPort(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "port");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "port");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.port());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementProtocol(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "protocol");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "protocol");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.protocol());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementSearch(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "search");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "search");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.search());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementRelList(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLAreaElement", "relList");
        return throwGetterTypeError(*exec, "HTMLAreaElement", "relList");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.relList()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLAreaElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLAreaElementPrototype* domObject = jsDynamicCast<JSHTMLAreaElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLAreaElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLAreaElementAlt(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "alt");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "alt");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::altAttr, nativeValue);
}


void setJSHTMLAreaElementCoords(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "coords");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "coords");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::coordsAttr, nativeValue);
}


void setJSHTMLAreaElementHref(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "href");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "href");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::hrefAttr, nativeValue);
}


void setJSHTMLAreaElementNoHref(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "noHref");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "noHref");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::nohrefAttr, nativeValue);
}


void setJSHTMLAreaElementPing(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "ping");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "ping");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::pingAttr, nativeValue);
}


void setJSHTMLAreaElementRel(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "rel");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "rel");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::relAttr, nativeValue);
}


void setJSHTMLAreaElementShape(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "shape");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "shape");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::shapeAttr, nativeValue);
}


void setJSHTMLAreaElementTarget(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLAreaElement* castedThis = jsDynamicCast<JSHTMLAreaElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLAreaElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLAreaElement", "target");
        else
            throwSetterTypeError(*exec, "HTMLAreaElement", "target");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::targetAttr, nativeValue);
}


JSValue JSHTMLAreaElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAreaElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
