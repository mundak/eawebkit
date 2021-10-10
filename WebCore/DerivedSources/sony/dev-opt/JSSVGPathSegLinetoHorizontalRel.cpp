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
#include "JSSVGPathSegLinetoHorizontalRel.h"

#include "JSDOMBinding.h"
#include "SVGPathSegLinetoHorizontalRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGPathSegLinetoHorizontalRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegLinetoHorizontalRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegLinetoHorizontalRelConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGPathSegLinetoHorizontalRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGPathSegLinetoHorizontalRelPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegLinetoHorizontalRelPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegLinetoHorizontalRelPrototype>(vm.heap)) JSSVGPathSegLinetoHorizontalRelPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPathSegLinetoHorizontalRelPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGPathSegLinetoHorizontalRelConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegLinetoHorizontalRelConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegLinetoHorizontalRelConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegLinetoHorizontalRelConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegLinetoHorizontalRelConstructor>(vm.heap)) JSSVGPathSegLinetoHorizontalRelConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGPathSegLinetoHorizontalRelConstructor::s_info = { "SVGPathSegLinetoHorizontalRelConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoHorizontalRelConstructor) };

JSSVGPathSegLinetoHorizontalRelConstructor::JSSVGPathSegLinetoHorizontalRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegLinetoHorizontalRelConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegLinetoHorizontalRel::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGPathSegLinetoHorizontalRel"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoHorizontalRelPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalRelConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalRelX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegLinetoHorizontalRelX) },
};

const ClassInfo JSSVGPathSegLinetoHorizontalRelPrototype::s_info = { "SVGPathSegLinetoHorizontalRelPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoHorizontalRelPrototype) };

void JSSVGPathSegLinetoHorizontalRelPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGPathSegLinetoHorizontalRelPrototypeTableValues, *this);
}

const ClassInfo JSSVGPathSegLinetoHorizontalRel::s_info = { "SVGPathSegLinetoHorizontalRel", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoHorizontalRel) };

JSSVGPathSegLinetoHorizontalRel::JSSVGPathSegLinetoHorizontalRel(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPathSegLinetoHorizontalRel>&& impl)
    : JSSVGPathSeg(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGPathSegLinetoHorizontalRel::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegLinetoHorizontalRelPrototype::create(vm, globalObject, JSSVGPathSegLinetoHorizontalRelPrototype::createStructure(vm, globalObject, JSSVGPathSeg::getPrototype(vm, globalObject)));
}

JSObject* JSSVGPathSegLinetoHorizontalRel::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoHorizontalRel>(vm, globalObject);
}

EncodedJSValue jsSVGPathSegLinetoHorizontalRelX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegLinetoHorizontalRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoHorizontalRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoHorizontalRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegLinetoHorizontalRel", "x");
        return throwGetterTypeError(*exec, "SVGPathSegLinetoHorizontalRel", "x");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegLinetoHorizontalRelConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGPathSegLinetoHorizontalRelPrototype* domObject = jsDynamicCast<JSSVGPathSegLinetoHorizontalRelPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPathSegLinetoHorizontalRel::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGPathSegLinetoHorizontalRelX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegLinetoHorizontalRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoHorizontalRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoHorizontalRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegLinetoHorizontalRel", "x");
        else
            throwSetterTypeError(*exec, "SVGPathSegLinetoHorizontalRel", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX(nativeValue);
}


JSValue JSSVGPathSegLinetoHorizontalRel::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoHorizontalRelConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
