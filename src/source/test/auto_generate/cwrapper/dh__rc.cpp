// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "rc.hpp"

#include "dh__rc.hpp"

static void(*s_py_callback_rc___delete)(DjinniRecordHandle * );
void rc_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_rc___delete = ptr;
}

void rc___delete(DjinniRecordHandle * drh) {
    s_py_callback_rc___delete(drh);
}
void optional_rc___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_rc___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static int32_t ( * s_py_callback_rc_get_rc_f1)(DjinniRecordHandle *);

void rc_add_callback_get_rc_f1(int32_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_rc_get_rc_f1 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_rc_python_create_rc)(int32_t);

void rc_add_callback_python_create_rc(DjinniRecordHandle *( * ptr)(int32_t)) {
    s_py_callback_rc_python_create_rc = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniRc::fromCpp(const ::cpp_generated::Rc& dr) {

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_rc_python_create_rc(
            dr.a),
        rc___delete);
    return _aux;
}

::cpp_generated::Rc DjinniRc::toCpp(djinni::Handle<DjinniRecordHandle> dh) {

    auto _aux = ::cpp_generated::Rc(
        s_py_callback_rc_get_rc_f1(dh.get()));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniRc::fromCpp(std::optional<::cpp_generated::Rc> dc) {
    if (dc == std::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniRc::fromCpp(std::move(* dc)), optional_rc___delete);
}

std::optional<::cpp_generated::Rc>DjinniRc::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::optional<::cpp_generated::Rc>(DjinniRc::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), rc___delete)));
    }
    return std::nullopt;
}
