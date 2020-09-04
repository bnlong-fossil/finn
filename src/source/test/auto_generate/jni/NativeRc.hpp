// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "djinni_support.hpp"
#include "rc.hpp"

namespace djinni_generated {

class NativeRc final {
public:
    using CppType = ::cpp_generated::Rc;
    using JniType = jobject;

    using Boxed = NativeRc;

    ~NativeRc();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRc();
    friend ::djinni::JniClass<NativeRc>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("demo/auto/gen/Rc") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(I)V") };
    const jfieldID field_mA { ::djinni::jniGetFieldID(clazz.get(), "mA", "I") };
};

}  // namespace djinni_generated