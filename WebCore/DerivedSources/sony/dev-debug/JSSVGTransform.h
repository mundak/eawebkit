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

#ifndef JSSVGTransform_h
#define JSSVGTransform_h

#include "JSDOMWrapper.h"
#include "SVGAnimatedPropertyTearOff.h"
#include "SVGElement.h"
#include "SVGTransform.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSSVGTransform : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSSVGTransform* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPropertyTearOff<SVGTransform>>&& impl)
    {
        JSSVGTransform* ptr = new (NotNull, JSC::allocateCell<JSSVGTransform>(globalObject->vm().heap)) JSSVGTransform(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static SVGPropertyTearOff<SVGTransform>* toWrapped(JSC::JSValue);
    static void destroy(JSC::JSCell*);
    ~JSSVGTransform();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    SVGPropertyTearOff<SVGTransform>& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    SVGPropertyTearOff<SVGTransform>* m_impl;
protected:
    JSSVGTransform(JSC::Structure*, JSDOMGlobalObject*, Ref<SVGPropertyTearOff<SVGTransform>>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSSVGTransformOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, SVGPropertyTearOff<SVGTransform>*)
{
    static NeverDestroyed<JSSVGTransformOwner> owner;
    return &owner.get();
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SVGPropertyTearOff<SVGTransform>*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<SVGTransform>& impl) { return toJS(exec, globalObject, &impl); }


} // namespace WebCore

#endif
