// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once // python_cdef_ignore
#include <stdbool.h>  // python_cdef_ignore

#include <stdint.h> // python_cdef_ignore

struct DjinniRc;
void rc___delete(struct DjinniRecordHandle * );
void optional_rc___delete(struct DjinniOptionalRecordHandle * );
void rc_add_callback_get_rc_f1(int32_t( * ptr)(struct DjinniRecordHandle *));
void rc_add_callback_get_rc_f2(int32_t( * ptr)(struct DjinniRecordHandle *));
void rc_add_callback_get_rc_f3(struct DjinniBoxedI32 *( * ptr)(struct DjinniRecordHandle *));
void rc_add_callback_get_rc_f4(int( * ptr)(struct DjinniRecordHandle *));
void rc_add_callback_get_rc_f5(struct DjinniBinary *( * ptr)(struct DjinniRecordHandle *));
void rc_add_callback_python_create_rc(struct DjinniRecordHandle *( * ptr)(int32_t, int32_t, struct DjinniBoxedI32 *, int, struct DjinniBinary *));
void rc_add_callback___delete(void( * ptr)(struct DjinniRecordHandle *));
