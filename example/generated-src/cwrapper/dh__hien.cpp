// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "hien.hpp"

#include "dh__hien.hpp"

static void(*s_py_callback_hien___delete)(DjinniRecordHandle * );
void hien_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_hien___delete = ptr;
}

void hien___delete(DjinniRecordHandle * drh) {
    s_py_callback_hien___delete(drh);
}
void optional_hien___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_hien___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static DjinniString * ( * s_py_callback_hien_get_hien_f1)(DjinniRecordHandle *);

void hien_add_callback_get_hien_f1(DjinniString *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_hien_get_hien_f1 = ptr;
}

static DjinniString * ( * s_py_callback_hien_get_hien_f2)(DjinniRecordHandle *);

void hien_add_callback_get_hien_f2(DjinniString *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_hien_get_hien_f2 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_hien_python_create_hien)(DjinniString *, DjinniString *);

void hien_add_callback_python_create_hien(DjinniRecordHandle *( * ptr)(DjinniString *, DjinniString *)) {
    s_py_callback_hien_python_create_hien = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniHien::fromCpp(const ::textsort::Hien& dr) {
    auto  _field_hien = DjinniString::fromCpp(dr.hien);
    auto  _field_hien_1 = DjinniString::fromCpp(dr.hien_1);

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_hien_python_create_hien(
            _field_hien.release(),
            _field_hien_1.release()),
        hien___delete);
    return _aux;
}

::textsort::Hien DjinniHien::toCpp(djinni::Handle<DjinniRecordHandle> dh) {
    std::unique_ptr<DjinniString> _field_hien(s_py_callback_hien_get_hien_f1(dh.get()));
    std::unique_ptr<DjinniString> _field_hien_1(s_py_callback_hien_get_hien_f2(dh.get()));

    auto _aux = ::textsort::Hien(
        DjinniString::toCpp(std::move( _field_hien)),
        DjinniString::toCpp(std::move( _field_hien_1)));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniHien::fromCpp(std::experimental::optional<::textsort::Hien> dc) {
    if (dc == std::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniHien::fromCpp(std::move(* dc)), optional_hien___delete);
}

std::experimental::optional<::textsort::Hien>DjinniHien::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::experimental::optional<::textsort::Hien>(DjinniHien::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), hien___delete)));
    }
    return std::nullopt;
}

