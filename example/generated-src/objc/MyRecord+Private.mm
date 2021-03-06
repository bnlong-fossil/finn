// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#import "MyRecord+Private.h"
#import "MyEnum+Private.h"
#import "Rc+Private.h"
#import <Djinni/DJIMarshal+Json.h>
#import <Djinni/DJIMarshal+Private.h>
#include <cassert>

namespace djinni_generated {

auto MyRecordHelper::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I32::toCpp(obj.__djinni__objc_test),
            ::djinni::Optional<std::optional, ::djinni::U32>::toCpp(obj.__djinni__objc_test1),
            ::djinni::List<::djinni::U32>::toCpp(obj.__djinni__objc_test2),
            ::djinni::String::toCpp(obj.__djinni__objc_test3),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.__djinni__objc_test31),
            ::djinni::Date::toCpp(obj.__djinni__objc_test4),
            ::djinni::Optional<std::optional, ::djinni::Date>::toCpp(obj.__djinni__objc_test41),
            ::djinni::Binary::toCpp(obj.__djinni__objc_test5),
            ::djinni::List<::djinni::Binary>::toCpp(obj.__djinni__objc_test6),
            ::djinni::Set<::djinni::I32>::toCpp(obj.__djinni__objc_test7),
            ::djinni::Map<::djinni::I32, ::djinni::String>::toCpp(obj.__djinni__objc_test8),
            ::djinni_generated::RcHelper::toCpp(obj.__djinni__objc_test9),
            ::djinni::Optional<std::optional, ::djinni_generated::RcHelper>::toCpp(obj.__djinni__objc_test10),
            ::djinni::List<::djinni_generated::RcHelper>::toCpp(obj.__djinni__objc_test101),
            ::djinni::Enum<::textsort::my_enum, MyEnum>::toCpp(obj.__djinni__objc_test11),
            ::djinni::Optional<std::optional, ::djinni::Enum<::textsort::my_enum, MyEnum>>::toCpp(obj.__djinni__objc_test13),
            ::djinni::Optional<std::optional, ::djinni::I16>::toCpp(obj.__djinni__objc_test14),
            ::djinni::List<::djinni::Enum<::textsort::my_enum, MyEnum>>::toCpp(obj.__djinni__objc_test15),
            ::djinni::Set<::djinni::Enum<::textsort::my_enum, MyEnum>>::toCpp(obj.__djinni__objc_test16),
            ::djinni::Map<::djinni::Enum<::textsort::my_enum, MyEnum>, ::djinni::I16>::toCpp(obj.__djinni__objc_test17)};
}

auto MyRecordHelper::fromCpp(const CppType& cpp) -> ObjcType
{
    return [MyRecord initWithTest:(::djinni::I32::fromCpp(cpp.test))
                            test1:(::djinni::Optional<std::optional, ::djinni::U32>::fromCpp(cpp.test1))
                            test2:(::djinni::List<::djinni::U32>::fromCpp(cpp.test2))
                            test3:(::djinni::String::fromCpp(cpp.test3))
                           test31:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.test3_1))
                            test4:(::djinni::Date::fromCpp(cpp.test4))
                           test41:(::djinni::Optional<std::optional, ::djinni::Date>::fromCpp(cpp.test4_1))
                            test5:(::djinni::Binary::fromCpp(cpp.test5))
                            test6:(::djinni::List<::djinni::Binary>::fromCpp(cpp.test6))
                            test7:(::djinni::Set<::djinni::I32>::fromCpp(cpp.test7))
                            test8:(::djinni::Map<::djinni::I32, ::djinni::String>::fromCpp(cpp.test8))
                            test9:(::djinni_generated::RcHelper::fromCpp(cpp.test9))
                           test10:(::djinni::Optional<std::optional, ::djinni_generated::RcHelper>::fromCpp(cpp.test10))
                          test101:(::djinni::List<::djinni_generated::RcHelper>::fromCpp(cpp.test10_1))
                           test11:(::djinni::Enum<::textsort::my_enum, MyEnum>::fromCpp(cpp.test11))
                           test13:(::djinni::Optional<std::optional, ::djinni::Enum<::textsort::my_enum, MyEnum>>::fromCpp(cpp.test13))
                           test14:(::djinni::Optional<std::optional, ::djinni::I16>::fromCpp(cpp.test14))
                           test15:(::djinni::List<::djinni::Enum<::textsort::my_enum, MyEnum>>::fromCpp(cpp.test15))
                           test16:(::djinni::Set<::djinni::Enum<::textsort::my_enum, MyEnum>>::fromCpp(cpp.test16))
                           test17:(::djinni::Map<::djinni::Enum<::textsort::my_enum, MyEnum>, ::djinni::I16>::fromCpp(cpp.test17))];
}

}  // namespace djinni_generated
