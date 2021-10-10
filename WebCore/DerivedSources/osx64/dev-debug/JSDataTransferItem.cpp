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

#if ENABLE(DATA_TRANSFER_ITEMS)

#include "JSDataTransferItem.h"

#include "Blob.h"
#include "DataTransferItem.h"
#include "ExceptionCode.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "JSStringCallback.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemPrototypeFunctionGetAsString(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDataTransferItemPrototypeFunctionGetAsFile(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsDataTransferItemKind(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDataTransferItemType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDataTransferItemPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDataTransferItemPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDataTransferItemPrototype* ptr = new (NotNull, JSC::allocateCell<JSDataTransferItemPrototype>(vm.heap)) JSDataTransferItemPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDataTransferItemPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSDataTransferItemPrototypeTableValues[] =
{
    { "kind", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataTransferItemKind), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataTransferItemType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "getAsString", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemPrototypeFunctionGetAsString), (intptr_t) (0) },
    { "getAsFile", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemPrototypeFunctionGetAsFile), (intptr_t) (0) },
};

const ClassInfo JSDataTransferItemPrototype::s_info = { "DataTransferItemPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDataTransferItemPrototype) };

void JSDataTransferItemPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDataTransferItemPrototypeTableValues, *this);
}

const ClassInfo JSDataTransferItem::s_info = { "DataTransferItem", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDataTransferItem) };

JSDataTransferItem::JSDataTransferItem(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DataTransferItem>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSDataTransferItem::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDataTransferItemPrototype::create(vm, globalObject, JSDataTransferItemPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSDataTransferItem::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDataTransferItem>(vm, globalObject);
}

void JSDataTransferItem::destroy(JSC::JSCell* cell)
{
    JSDataTransferItem* thisObject = static_cast<JSDataTransferItem*>(cell);
    thisObject->JSDataTransferItem::~JSDataTransferItem();
}

JSDataTransferItem::~JSDataTransferItem()
{
    releaseImpl();
}

EncodedJSValue jsDataTransferItemKind(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDataTransferItem* castedThis = jsDynamicCast<JSDataTransferItem*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDataTransferItemPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DataTransferItem", "kind");
        return throwGetterTypeError(*exec, "DataTransferItem", "kind");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.kind());
    return JSValue::encode(result);
}


EncodedJSValue jsDataTransferItemType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDataTransferItem* castedThis = jsDynamicCast<JSDataTransferItem*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDataTransferItemPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DataTransferItem", "type");
        return throwGetterTypeError(*exec, "DataTransferItem", "type");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsDataTransferItemPrototypeFunctionGetAsString(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDataTransferItem* castedThis = jsDynamicCast<JSDataTransferItem*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DataTransferItem", "getAsString");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItem::info());
    auto& impl = castedThis->impl();
    RefPtr<StringCallback> callback;
    if (!exec->argument(0).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(0).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 0, "callback", "DataTransferItem", "getAsString");
        callback = JSStringCallback::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    }
    impl.getAsString(callback);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemPrototypeFunctionGetAsFile(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDataTransferItem* castedThis = jsDynamicCast<JSDataTransferItem*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DataTransferItem", "getAsFile");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItem::info());
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getAsFile()));
    return JSValue::encode(result);
}

bool JSDataTransferItemOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSDataTransferItemOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDataTransferItem = jsCast<JSDataTransferItem*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDataTransferItem->impl(), jsDataTransferItem);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, DataTransferItem* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDataTransferItem>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DataTransferItem.
    COMPILE_ASSERT(!__is_polymorphic(DataTransferItem), DataTransferItem_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSDataTransferItem>(globalObject, impl);
}

DataTransferItem* JSDataTransferItem::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDataTransferItem*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(DATA_TRANSFER_ITEMS)
