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

#ifndef JSSVGRenderingIntent_h
#define JSSVGRenderingIntent_h

#include "JSDOMWrapper.h"
#include "SVGElement.h"
#include "SVGRenderingIntent.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSSVGRenderingIntent : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSSVGRenderingIntent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGRenderingIntent>&& impl)
    {
        JSSVGRenderingIntent* ptr = new (NotNull, JSC::allocateCell<JSSVGRenderingIntent>(globalObject->vm().heap)) JSSVGRenderingIntent(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static SVGRenderingIntent* toWrapped(JSC::JSValue);
    static void destroy(JSC::JSCell*);
    ~JSSVGRenderingIntent();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    SVGRenderingIntent& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    SVGRenderingIntent* m_impl;
protected:
    JSSVGRenderingIntent(JSC::Structure*, JSDOMGlobalObject*, Ref<SVGRenderingIntent>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSSVGRenderingIntentOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, SVGRenderingIntent*)
{
    static NeverDestroyed<JSSVGRenderingIntentOwner> owner;
    return &owner.get();
}



} // namespace WebCore

#endif
