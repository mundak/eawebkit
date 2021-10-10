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
#include "JSSVGAnimateMotionElement.h"

#include "JSDOMBinding.h"
#include "SVGAnimateMotionElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGAnimateMotionElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGAnimateMotionElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGAnimateMotionElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGAnimateMotionElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGAnimateMotionElementPrototype>(vm.heap)) JSSVGAnimateMotionElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGAnimateMotionElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGAnimateMotionElementConstructor : public DOMConstructorObject {
private:
    JSSVGAnimateMotionElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGAnimateMotionElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGAnimateMotionElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGAnimateMotionElementConstructor>(vm.heap)) JSSVGAnimateMotionElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGAnimateMotionElementConstructor::s_info = { "SVGAnimateMotionElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimateMotionElementConstructor) };

JSSVGAnimateMotionElementConstructor::JSSVGAnimateMotionElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimateMotionElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGAnimateMotionElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGAnimateMotionElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateMotionElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimateMotionElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGAnimateMotionElementPrototype::s_info = { "SVGAnimateMotionElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimateMotionElementPrototype) };

void JSSVGAnimateMotionElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGAnimateMotionElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGAnimateMotionElement::s_info = { "SVGAnimateMotionElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimateMotionElement) };

JSSVGAnimateMotionElement::JSSVGAnimateMotionElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGAnimateMotionElement>&& impl)
    : JSSVGAnimationElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGAnimateMotionElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGAnimateMotionElementPrototype::create(vm, globalObject, JSSVGAnimateMotionElementPrototype::createStructure(vm, globalObject, JSSVGAnimationElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGAnimateMotionElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimateMotionElement>(vm, globalObject);
}

EncodedJSValue jsSVGAnimateMotionElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGAnimateMotionElementPrototype* domObject = jsDynamicCast<JSSVGAnimateMotionElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGAnimateMotionElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGAnimateMotionElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimateMotionElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
