// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLDocument.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLAllCollection.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLDocument::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLDocument::domTemplate, V8HTMLDocument::refObject, V8HTMLDocument::derefObject, V8HTMLDocument::trace, 0, 0, V8HTMLDocument::preparePrototypeObject, V8HTMLDocument::installConditionallyEnabledProperties, "HTMLDocument", &V8Document::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLDocument.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLDocument::s_wrapperTypeInfo = V8HTMLDocument::wrapperTypeInfo;

namespace HTMLDocumentV8Internal {

template<class CallbackInfo>
static bool HTMLDocumentCreateDataProperty(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const CallbackInfo& info)
{
    ASSERT(info.This()->IsObject());
    return v8CallBoolean(v8::Local<v8::Object>::Cast(info.This())->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), name, v8Value));
}

static void fgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->fgColor(), info.GetIsolate());
}

static void fgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLDocumentV8Internal::fgColorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void fgColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setFgColor(cppValue);
}

static void fgColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::fgColorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void linkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->linkColor(), info.GetIsolate());
}

static void linkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLDocumentV8Internal::linkColorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void linkColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setLinkColor(cppValue);
}

static void linkColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::linkColorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void vlinkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->vlinkColor(), info.GetIsolate());
}

static void vlinkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLDocumentV8Internal::vlinkColorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void vlinkColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setVlinkColor(cppValue);
}

static void vlinkColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::vlinkColorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void alinkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->alinkColor(), info.GetIsolate());
}

static void alinkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLDocumentV8Internal::alinkColorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void alinkColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setAlinkColor(cppValue);
}

static void alinkColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::alinkColorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->bgColor(), info.GetIsolate());
}

static void bgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLDocumentV8Internal::bgColorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void bgColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsNullString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBgColor(cppValue);
}

static void bgColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::bgColorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void allAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->allForBinding()), impl);
}

static void allAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLDocumentV8Internal::allAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void allAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "all");
    HTMLDocumentCreateDataProperty(propertyName, v8Value, info);
}

static void allAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    HTMLDocumentV8Internal::allAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocument* impl = V8HTMLDocument::toImpl(info.Holder());
    impl->clear();
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::DocumentClear);
    HTMLDocumentV8Internal::clearMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void captureEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocument* impl = V8HTMLDocument::toImpl(info.Holder());
    impl->captureEvents();
}

static void captureEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::DocumentCaptureEvents);
    HTMLDocumentV8Internal::captureEventsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void releaseEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocument* impl = V8HTMLDocument::toImpl(info.Holder());
    impl->releaseEvents();
}

static void releaseEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::DocumentReleaseEvents);
    HTMLDocumentV8Internal::releaseEventsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HTMLDocumentV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8HTMLDocumentAccessors[] = {
    {"fgColor", HTMLDocumentV8Internal::fgColorAttributeGetterCallback, HTMLDocumentV8Internal::fgColorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"linkColor", HTMLDocumentV8Internal::linkColorAttributeGetterCallback, HTMLDocumentV8Internal::linkColorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"vlinkColor", HTMLDocumentV8Internal::vlinkColorAttributeGetterCallback, HTMLDocumentV8Internal::vlinkColorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"alinkColor", HTMLDocumentV8Internal::alinkColorAttributeGetterCallback, HTMLDocumentV8Internal::alinkColorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"bgColor", HTMLDocumentV8Internal::bgColorAttributeGetterCallback, HTMLDocumentV8Internal::bgColorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"all", HTMLDocumentV8Internal::allAttributeGetterCallback, HTMLDocumentV8Internal::allAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLDocumentMethods[] = {
    {"clear", HTMLDocumentV8Internal::clearMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"captureEvents", HTMLDocumentV8Internal::captureEventsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"releaseEvents", HTMLDocumentV8Internal::releaseEventsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HTMLDocumentTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLDocument", V8Document::domTemplate(isolate), V8HTMLDocument::internalFieldCount,
        0, 0,
        V8HTMLDocumentAccessors, WTF_ARRAY_LENGTH(V8HTMLDocumentAccessors),
        V8HTMLDocumentMethods, WTF_ARRAY_LENGTH(V8HTMLDocumentMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    functionTemplate->SetHiddenPrototype(true);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8HTMLDocument::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLDocumentTemplate);
}

bool V8HTMLDocument::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLDocument::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLDocument* V8HTMLDocument::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8HTMLDocument::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLDocument>()->ref();
#endif
}

void V8HTMLDocument::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLDocument>()->deref();
#endif
}

} // namespace blink