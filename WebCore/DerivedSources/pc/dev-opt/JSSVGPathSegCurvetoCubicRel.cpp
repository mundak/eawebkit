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
#include "JSSVGPathSegCurvetoCubicRel.h"

#include "JSDOMBinding.h"
#include "SVGPathSegCurvetoCubicRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGPathSegCurvetoCubicRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoCubicRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoCubicRelX1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelX1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoCubicRelY1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelY1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoCubicRelX2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelX2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoCubicRelY2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelY2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoCubicRelConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGPathSegCurvetoCubicRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGPathSegCurvetoCubicRelPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegCurvetoCubicRelPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicRelPrototype>(vm.heap)) JSSVGPathSegCurvetoCubicRelPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPathSegCurvetoCubicRelPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGPathSegCurvetoCubicRelConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegCurvetoCubicRelConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegCurvetoCubicRelConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegCurvetoCubicRelConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicRelConstructor>(vm.heap)) JSSVGPathSegCurvetoCubicRelConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGPathSegCurvetoCubicRelConstructor::s_info = { "SVGPathSegCurvetoCubicRelConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoCubicRelConstructor) };

JSSVGPathSegCurvetoCubicRelConstructor::JSSVGPathSegCurvetoCubicRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegCurvetoCubicRelConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegCurvetoCubicRel::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGPathSegCurvetoCubicRel"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoCubicRelPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoCubicRelX) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoCubicRelY) },
    { "x1", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelX1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoCubicRelX1) },
    { "y1", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelY1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoCubicRelY1) },
    { "x2", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelX2), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoCubicRelX2) },
    { "y2", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelY2), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoCubicRelY2) },
};

const ClassInfo JSSVGPathSegCurvetoCubicRelPrototype::s_info = { "SVGPathSegCurvetoCubicRelPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoCubicRelPrototype) };

void JSSVGPathSegCurvetoCubicRelPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGPathSegCurvetoCubicRelPrototypeTableValues, *this);
}

const ClassInfo JSSVGPathSegCurvetoCubicRel::s_info = { "SVGPathSegCurvetoCubicRel", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoCubicRel) };

JSSVGPathSegCurvetoCubicRel::JSSVGPathSegCurvetoCubicRel(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPathSegCurvetoCubicRel>&& impl)
    : JSSVGPathSeg(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGPathSegCurvetoCubicRel::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegCurvetoCubicRelPrototype::create(vm, globalObject, JSSVGPathSegCurvetoCubicRelPrototype::createStructure(vm, globalObject, JSSVGPathSeg::getPrototype(vm, globalObject)));
}

JSObject* JSSVGPathSegCurvetoCubicRel::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoCubicRel>(vm, globalObject);
}

EncodedJSValue jsSVGPathSegCurvetoCubicRelX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoCubicRel", "x");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "x");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoCubicRelY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoCubicRel", "y");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "y");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoCubicRelX1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoCubicRel", "x1");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "x1");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x1());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoCubicRelY1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoCubicRel", "y1");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "y1");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y1());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoCubicRelX2(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoCubicRel", "x2");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "x2");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x2());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoCubicRelY2(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoCubicRel", "y2");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "y2");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y2());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoCubicRelConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGPathSegCurvetoCubicRelPrototype* domObject = jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPathSegCurvetoCubicRel::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGPathSegCurvetoCubicRelX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoCubicRel", "x");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoCubicRel", "y");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelX1(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoCubicRel", "x1");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "x1");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX1(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelY1(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoCubicRel", "y1");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "y1");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY1(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelX2(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoCubicRel", "x2");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "x2");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX2(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelY2(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoCubicRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoCubicRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoCubicRel", "y2");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoCubicRel", "y2");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY2(nativeValue);
}


JSValue JSSVGPathSegCurvetoCubicRel::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoCubicRelConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
