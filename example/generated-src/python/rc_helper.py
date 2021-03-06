# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from example.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyBinary, CPyBoxedI32, CPyEnum, CPyPrimitive, CPyRecord

from my_enum import MyEnum
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

from rc import Rc

class RcHelper:
    @staticmethod
    def release(c_ptr):
        assert c_ptr in c_data_set
        c_data_set.remove(ffi.cast("void*", c_ptr))

    @ffi.callback("int32_t(struct DjinniRecordHandle *)")
    def get_rc_f1(cself):
        try:
            _ret = CPyPrimitive.fromPy(CPyRecord.toPy(None, cself).a)
            return _ret
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("int32_t(struct DjinniRecordHandle *)")
    def get_rc_f2(cself):
        try:
            _ret = CPyPrimitive.fromPy(CPyRecord.toPy(None, cself).b)
            return _ret
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("struct DjinniBoxedI32 *(struct DjinniRecordHandle *)")
    def get_rc_f3(cself):
        try:
            with CPyBoxedI32.fromPyOpt(CPyRecord.toPy(None, cself).c) as py_obj:
                return py_obj.release_djinni_boxed()
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("int(struct DjinniRecordHandle *)")
    def get_rc_f4(cself):
        try:
            _ret = CPyEnum.fromPy(CPyRecord.toPy(None, cself).d)
            assert _ret != -1
            return _ret
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("struct DjinniBinary *(struct DjinniRecordHandle *)")
    def get_rc_f5(cself):
        try:
            with CPyBinary.fromPy(CPyRecord.toPy(None, cself).e) as py_obj:
                _ret = py_obj.release_djinni_binary()
                assert _ret != ffi.NULL
                return _ret
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("struct DjinniRecordHandle *(int32_t,int32_t,struct DjinniBoxedI32 *,int,struct DjinniBinary *)")
    def python_create_rc(a,b,c,d,e):
        py_rec = Rc(
            CPyPrimitive.toPy(a),
            CPyPrimitive.toPy(b),
            CPyBoxedI32.toPyOpt(c),
            CPyEnum.toPy(MyEnum, d),
            CPyBinary.toPy(e))
        return CPyRecord.fromPy(Rc.c_data_set, py_rec) #to do: can be optional?

    @ffi.callback("void (struct DjinniRecordHandle *)")
    def __delete(dh):
        assert dh in Rc.c_data_set
        Rc.c_data_set.remove(dh)

    @staticmethod
    def _add_callbacks():
        lib.rc_add_callback_get_rc_f1(RcHelper.get_rc_f1)
        lib.rc_add_callback_python_create_rc(RcHelper.python_create_rc)
        lib.rc_add_callback_get_rc_f5(RcHelper.get_rc_f5)
        lib.rc_add_callback_get_rc_f2(RcHelper.get_rc_f2)
        lib.rc_add_callback_get_rc_f3(RcHelper.get_rc_f3)
        lib.rc_add_callback___delete(RcHelper.__delete)
        lib.rc_add_callback_get_rc_f4(RcHelper.get_rc_f4)

RcHelper._add_callbacks()

