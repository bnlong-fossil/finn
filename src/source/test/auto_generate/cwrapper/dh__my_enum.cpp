// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "my_enum.hpp"

int32_t int32_from_enum_my_enum(std::optional<::cpp_generated::MyEnum> e) {
    if (e) {
        return static_cast<int32_t>(* e);
    }
    return -1; // -1 to signal null boxed enum
}

int32_t int32_from_enum_my_enum(::cpp_generated::MyEnum e) {
    return static_cast<int32_t>(e);
}
std::optional<::cpp_generated::MyEnum> get_boxed_enum_my_enum_from_int32(int32_t e) {
    if (e == -1) { // to signal null enum
        return std::nullopt;
    }
    return std::optional<::cpp_generated::MyEnum>(static_cast<::cpp_generated::MyEnum>(e));
}
