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

#if ENABLE(SVG_FONTS)

#include "JSSVGMissingGlyphElement.h"

#include "JSDOMBinding.h"
#include "SVGMissingGlyphElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGMissingGlyphElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGMissingGlyphElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGMissingGlyphElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGMissingGlyphElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGMissingGlyphElementPrototype>(vm.heap)) JSSVGMissingGlyphElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGMissingGlyphElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGMissingGlyphElementConstructor : public DOMConstructorObject {
private:
    JSSVGMissingGlyphElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGMissingGlyphElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGMissingGlyphElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGMissingGlyphElementConstructor>(vm.heap)) JSSVGMissingGlyphElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGMissingGlyphElementConstructor::s_info = { "SVGMissingGlyphElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGMissingGlyphElementConstructor) };

JSSVGMissingGlyphElementConstructor::JSSVGMissingGlyphElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGMissingGlyphElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGMissingGlyphElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGMissingGlyphElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGMissingGlyphElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMissingGlyphElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGMissingGlyphElementPrototype::s_info = { "SVGMissingGlyphElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGMissingGlyphElementPrototype) };

void JSSVGMissingGlyphElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGMissingGlyphElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGMissingGlyphElement::s_info = { "SVGMissingGlyphElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGMissingGlyphElement) };

JSSVGMissingGlyphElement::JSSVGMissingGlyphElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGMissingGlyphElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGMissingGlyphElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGMissingGlyphElementPrototype::create(vm, globalObject, JSSVGMissingGlyphElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGMissingGlyphElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMissingGlyphElement>(vm, globalObject);
}

EncodedJSValue jsSVGMissingGlyphElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGMissingGlyphElementPrototype* domObject = jsDynamicCast<JSSVGMissingGlyphElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGMissingGlyphElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGMissingGlyphElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGMissingGlyphElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG_FONTS)