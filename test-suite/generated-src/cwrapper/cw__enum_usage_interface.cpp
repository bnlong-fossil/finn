// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "enum_usage_interface.hpp"

#include "color.hpp"
#include "cw__enum_usage_interface.hpp"
#include "dh__color.hpp"
#include "dh__list_enum_color.hpp"
#include "dh__map_enum_color_enum_color.hpp"
#include "dh__set_enum_color.hpp"
#include <experimental/optional>

std::shared_ptr<::testsuite::EnumUsageInterface> DjinniWrapperEnumUsageInterface::get(djinni::WrapperRef<DjinniWrapperEnumUsageInterface> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void enum_usage_interface___wrapper_add_ref(DjinniWrapperEnumUsageInterface * dh) {
    dh->ref_count.fetch_add(1);
}
void enum_usage_interface___wrapper_dec_ref(DjinniWrapperEnumUsageInterface * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperEnumUsageInterface> DjinniWrapperEnumUsageInterface::wrap(std::shared_ptr<::testsuite::EnumUsageInterface> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperEnumUsageInterface>(new DjinniWrapperEnumUsageInterface{ std::move(obj) }, enum_usage_interface___wrapper_dec_ref);
    return nullptr;
}

int cw__enum_usage_interface_e(DjinniWrapperEnumUsageInterface * djinni_this, int e) {
    try {
        return int32_from_enum_color(djinni_this->wrapped_obj->e(static_cast<::testsuite::color>(e)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

int cw__enum_usage_interface_o(DjinniWrapperEnumUsageInterface * djinni_this, int o) {
    try {
        return int32_from_enum_color(djinni_this->wrapped_obj->o(get_boxed_enum_color_from_int32(o)));
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniObjectHandle * cw__enum_usage_interface_l(DjinniWrapperEnumUsageInterface * djinni_this, DjinniObjectHandle * l) {
    djinni::Handle<DjinniObjectHandle> _l(l, list_enum_color___delete);
    try {
        return DjinniListEnumColor::fromCpp(djinni_this->wrapped_obj->l(DjinniListEnumColor::toCpp(std::move(_l)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniObjectHandle * cw__enum_usage_interface_s(DjinniWrapperEnumUsageInterface * djinni_this, DjinniObjectHandle * s) {
    djinni::Handle<DjinniObjectHandle> _s(s, set_enum_color___delete);
    try {
        return DjinniSetEnumColor::fromCpp(djinni_this->wrapped_obj->s(DjinniSetEnumColor::toCpp(std::move(_s)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

DjinniObjectHandle * cw__enum_usage_interface_m(DjinniWrapperEnumUsageInterface * djinni_this, DjinniObjectHandle * m) {
    djinni::Handle<DjinniObjectHandle> _m(m, map_enum_color_enum_color___delete);
    try {
        return DjinniMapEnumColorEnumColor::fromCpp(djinni_this->wrapped_obj->m(DjinniMapEnumColorEnumColor::toCpp(std::move(_m)))).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
