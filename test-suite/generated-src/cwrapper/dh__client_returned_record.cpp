// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "client_returned_record.hpp"

#include "dh__client_returned_record.hpp"
#include <experimental/optional>

static void(*s_py_callback_client_returned_record___delete)(DjinniRecordHandle * );
void client_returned_record_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_client_returned_record___delete = ptr;
}

void client_returned_record___delete(DjinniRecordHandle * drh) {
    s_py_callback_client_returned_record___delete(drh);
}
void optional_client_returned_record___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_client_returned_record___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static int64_t ( * s_py_callback_client_returned_record_get_client_returned_record_f1)(DjinniRecordHandle *);

void client_returned_record_add_callback_get_client_returned_record_f1(int64_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_client_returned_record_get_client_returned_record_f1 = ptr;
}

static DjinniString * ( * s_py_callback_client_returned_record_get_client_returned_record_f2)(DjinniRecordHandle *);

void client_returned_record_add_callback_get_client_returned_record_f2(DjinniString *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_client_returned_record_get_client_returned_record_f2 = ptr;
}

static DjinniString * ( * s_py_callback_client_returned_record_get_client_returned_record_f3)(DjinniRecordHandle *);

void client_returned_record_add_callback_get_client_returned_record_f3(DjinniString *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_client_returned_record_get_client_returned_record_f3 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_client_returned_record_python_create_client_returned_record)(int64_t, DjinniString *, DjinniString *);

void client_returned_record_add_callback_python_create_client_returned_record(DjinniRecordHandle *( * ptr)(int64_t, DjinniString *, DjinniString *)) {
    s_py_callback_client_returned_record_python_create_client_returned_record = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniClientReturnedRecord::fromCpp(const ::testsuite::ClientReturnedRecord& dr) {
    auto  _field_content = DjinniString::fromCpp(dr.content);
    auto  _field_misc = DjinniOptionalString::fromCpp(dr.misc);

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_client_returned_record_python_create_client_returned_record(
            dr.record_id,
            _field_content.release(),
            _field_misc.release()),
        client_returned_record___delete);
    return _aux;
}

::testsuite::ClientReturnedRecord DjinniClientReturnedRecord::toCpp(djinni::Handle<DjinniRecordHandle> dh) {
    std::unique_ptr<DjinniString> _field_content(s_py_callback_client_returned_record_get_client_returned_record_f2(dh.get()));
    std::unique_ptr<DjinniString> _field_misc(s_py_callback_client_returned_record_get_client_returned_record_f3(dh.get()));

    auto _aux = ::testsuite::ClientReturnedRecord(
        s_py_callback_client_returned_record_get_client_returned_record_f1(dh.get()),
        DjinniString::toCpp(std::move( _field_content)),
        DjinniOptionalString::toCpp(std::move( _field_misc)));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniClientReturnedRecord::fromCpp(std::experimental::optional<::testsuite::ClientReturnedRecord> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniClientReturnedRecord::fromCpp(std::move(* dc)), optional_client_returned_record___delete);
}

std::experimental::optional<::testsuite::ClientReturnedRecord>DjinniClientReturnedRecord::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::experimental::optional<::testsuite::ClientReturnedRecord>(DjinniClientReturnedRecord::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), client_returned_record___delete)));
    }
    return std::experimental::nullopt;
}

