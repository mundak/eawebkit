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
#include "JSHTMLDocument.h"

#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLDocument.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include "URL.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionClose(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionWrite(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionWriteln(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionClear(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionCaptureEvents(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionReleaseEvents(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLDocumentEmbeds(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLDocumentPlugins(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLDocumentScripts(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLDocumentAll(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentAll(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLDocumentHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLDocumentDir(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentDir(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentDesignMode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentDesignMode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentCompatMode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLDocumentBgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentBgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentFgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentFgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentAlinkColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentAlinkColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentLinkColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentLinkColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentVlinkColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLDocumentVlinkColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLDocumentConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLDocumentPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLDocumentPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLDocumentPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLDocumentPrototype>(vm.heap)) JSHTMLDocumentPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLDocumentPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLDocumentConstructor : public DOMConstructorObject {
private:
    JSHTMLDocumentConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLDocumentConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLDocumentConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLDocumentConstructor>(vm.heap)) JSHTMLDocumentConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table */

static const struct CompactHashIndex JSHTMLDocumentTableIndex[36] = {
    { 10, 35 },
    { -1, -1 },
    { 12, -1 },
    { 5, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 6, -1 },
    { -1, -1 },
    { -1, -1 },
    { 11, -1 },
    { -1, -1 },
    { 14, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { 1, 32 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, 33 },
    { 0, 34 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 7, -1 },
    { 8, -1 },
    { 9, -1 },
    { 13, -1 },
};


static const HashTableValue JSHTMLDocumentTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "embeds", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentEmbeds), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "plugins", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentPlugins), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "scripts", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentScripts), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "all", CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentAll), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentAll) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "dir", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentDir), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentDir) },
    { "designMode", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentDesignMode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentDesignMode) },
    { "compatMode", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentCompatMode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "bgColor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentBgColor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentBgColor) },
    { "fgColor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentFgColor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentFgColor) },
    { "alinkColor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentAlinkColor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentAlinkColor) },
    { "linkColor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentLinkColor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentLinkColor) },
    { "vlinkColor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDocumentVlinkColor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLDocumentVlinkColor) },
};

static const HashTable JSHTMLDocumentTable = { 15, 31, true, JSHTMLDocumentTableValues, 0, JSHTMLDocumentTableIndex };
const ClassInfo JSHTMLDocumentConstructor::s_info = { "HTMLDocumentConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLDocumentConstructor) };

JSHTMLDocumentConstructor::JSHTMLDocumentConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLDocumentConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLDocument::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLDocument"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLDocumentPrototypeTableValues[] =
{
    { "open", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLDocumentPrototypeFunctionOpen), (intptr_t) (0) },
    { "close", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLDocumentPrototypeFunctionClose), (intptr_t) (0) },
    { "write", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLDocumentPrototypeFunctionWrite), (intptr_t) (0) },
    { "writeln", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLDocumentPrototypeFunctionWriteln), (intptr_t) (0) },
    { "clear", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLDocumentPrototypeFunctionClear), (intptr_t) (0) },
    { "captureEvents", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLDocumentPrototypeFunctionCaptureEvents), (intptr_t) (0) },
    { "releaseEvents", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLDocumentPrototypeFunctionReleaseEvents), (intptr_t) (0) },
};

const ClassInfo JSHTMLDocumentPrototype::s_info = { "HTMLDocumentPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLDocumentPrototype) };

void JSHTMLDocumentPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLDocumentPrototypeTableValues, *this);
}

const ClassInfo JSHTMLDocument::s_info = { "HTMLDocument", &Base::s_info, &JSHTMLDocumentTable, CREATE_METHOD_TABLE(JSHTMLDocument) };

JSHTMLDocument::JSHTMLDocument(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLDocument>&& impl)
    : JSDocument(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLDocument::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLDocumentPrototype::create(vm, globalObject, JSHTMLDocumentPrototype::createStructure(vm, globalObject, JSDocument::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLDocument::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDocument>(vm, globalObject);
}

bool JSHTMLDocument::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSHTMLDocument*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Identifier propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, &thisObject->impl(), propertyName)) {
        slot.setCustom(thisObject, ReadOnly | DontDelete | DontEnum, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsHTMLDocumentEmbeds(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.embeds()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentPlugins(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.plugins()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentScripts(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.scripts()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentAll(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    return JSValue::encode(castedThis->all(exec));
}


EncodedJSValue jsHTMLDocumentWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.width());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.height());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentDir(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.dir());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentDesignMode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.designMode());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentCompatMode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.compatMode());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentBgColor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.bgColor());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentFgColor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fgColor());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentAlinkColor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.alinkColor());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentLinkColor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.linkColor());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentVlinkColor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.vlinkColor());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLDocumentConstructor(ExecState* exec, JSObject*, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLDocument* domObject = jsDynamicCast<JSHTMLDocument*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLDocument::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLDocumentAll(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    castedThis->setAll(exec, value);
}


void setJSHTMLDocumentDir(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setDir(nativeValue);
}


void setJSHTMLDocumentDesignMode(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setDesignMode(nativeValue);
}


void setJSHTMLDocumentBgColor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBgColor(nativeValue);
}


void setJSHTMLDocumentFgColor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setFgColor(nativeValue);
}


void setJSHTMLDocumentAlinkColor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAlinkColor(nativeValue);
}


void setJSHTMLDocumentLinkColor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setLinkColor(nativeValue);
}


void setJSHTMLDocumentVlinkColor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSHTMLDocument*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setVlinkColor(nativeValue);
}


JSValue JSHTMLDocument::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDocumentConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionOpen(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLDocument* castedThis = jsDynamicCast<JSHTMLDocument*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLDocument", "open");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLDocument::info());
    return JSValue::encode(castedThis->open(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLDocument* castedThis = jsDynamicCast<JSHTMLDocument*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLDocument", "close");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLDocument::info());
    auto& impl = castedThis->impl();
    impl.close();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionWrite(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLDocument* castedThis = jsDynamicCast<JSHTMLDocument*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLDocument", "write");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLDocument::info());
    return JSValue::encode(castedThis->write(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionWriteln(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLDocument* castedThis = jsDynamicCast<JSHTMLDocument*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLDocument", "writeln");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLDocument::info());
    return JSValue::encode(castedThis->writeln(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLDocument* castedThis = jsDynamicCast<JSHTMLDocument*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLDocument", "clear");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLDocument::info());
    auto& impl = castedThis->impl();
    impl.clear();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionCaptureEvents(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLDocument* castedThis = jsDynamicCast<JSHTMLDocument*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLDocument", "captureEvents");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLDocument::info());
    auto& impl = castedThis->impl();
    impl.captureEvents();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLDocumentPrototypeFunctionReleaseEvents(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLDocument* castedThis = jsDynamicCast<JSHTMLDocument*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLDocument", "releaseEvents");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLDocument::info());
    auto& impl = castedThis->impl();
    impl.releaseEvents();
    return JSValue::encode(jsUndefined());
}


}