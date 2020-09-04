// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "djinni_support.hpp"
#include "my_record.hpp"

namespace djinni_generated {

class NativeMyRecord final {
public:
    using CppType = ::cpp_generated::MyRecord;
    using JniType = jobject;

    using Boxed = NativeMyRecord;

    ~NativeMyRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeMyRecord();
    friend ::djinni::JniClass<NativeMyRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("demo/auto/gen/MyRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/lang/Integer;Ljava/util/ArrayList;Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;[BLjava/util/ArrayList;Ljava/util/HashSet;Ljava/util/HashMap;Ldemo/auto/gen/Rc;Ldemo/auto/gen/Rc;Ljava/util/ArrayList;Ldemo/auto/gen/MyEnum;Lorg/json/JSONObject;Ldemo/auto/gen/MyEnum;Ljava/lang/Short;Ljava/util/ArrayList;Ljava/util/HashSet;Ljava/util/HashMap;)V") };
    const jfieldID field_mTest { ::djinni::jniGetFieldID(clazz.get(), "mTest", "I") };
    const jfieldID field_mTest1 { ::djinni::jniGetFieldID(clazz.get(), "mTest1", "Ljava/lang/Integer;") };
    const jfieldID field_mTest2 { ::djinni::jniGetFieldID(clazz.get(), "mTest2", "Ljava/util/ArrayList;") };
    const jfieldID field_mTest3 { ::djinni::jniGetFieldID(clazz.get(), "mTest3", "Ljava/lang/String;") };
    const jfieldID field_mTest31 { ::djinni::jniGetFieldID(clazz.get(), "mTest31", "Ljava/lang/String;") };
    const jfieldID field_mTest4 { ::djinni::jniGetFieldID(clazz.get(), "mTest4", "Ljava/util/Date;") };
    const jfieldID field_mTest41 { ::djinni::jniGetFieldID(clazz.get(), "mTest41", "Ljava/util/Date;") };
    const jfieldID field_mTest5 { ::djinni::jniGetFieldID(clazz.get(), "mTest5", "[B") };
    const jfieldID field_mTest6 { ::djinni::jniGetFieldID(clazz.get(), "mTest6", "Ljava/util/ArrayList;") };
    const jfieldID field_mTest7 { ::djinni::jniGetFieldID(clazz.get(), "mTest7", "Ljava/util/HashSet;") };
    const jfieldID field_mTest8 { ::djinni::jniGetFieldID(clazz.get(), "mTest8", "Ljava/util/HashMap;") };
    const jfieldID field_mTest9 { ::djinni::jniGetFieldID(clazz.get(), "mTest9", "Ldemo/auto/gen/Rc;") };
    const jfieldID field_mTest10 { ::djinni::jniGetFieldID(clazz.get(), "mTest10", "Ldemo/auto/gen/Rc;") };
    const jfieldID field_mTest101 { ::djinni::jniGetFieldID(clazz.get(), "mTest101", "Ljava/util/ArrayList;") };
    const jfieldID field_mTest11 { ::djinni::jniGetFieldID(clazz.get(), "mTest11", "Ldemo/auto/gen/MyEnum;") };
    const jfieldID field_mTest12 { ::djinni::jniGetFieldID(clazz.get(), "mTest12", "Lorg/json/JSONObject;") };
    const jfieldID field_mTest13 { ::djinni::jniGetFieldID(clazz.get(), "mTest13", "Ldemo/auto/gen/MyEnum;") };
    const jfieldID field_mTest14 { ::djinni::jniGetFieldID(clazz.get(), "mTest14", "Ljava/lang/Short;") };
    const jfieldID field_mTest15 { ::djinni::jniGetFieldID(clazz.get(), "mTest15", "Ljava/util/ArrayList;") };
    const jfieldID field_mTest16 { ::djinni::jniGetFieldID(clazz.get(), "mTest16", "Ljava/util/HashSet;") };
    const jfieldID field_mTest17 { ::djinni::jniGetFieldID(clazz.get(), "mTest17", "Ljava/util/HashMap;") };
};

}  // namespace djinni_generated
