# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from example.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyBinary, CPyBoxedDate, CPyBoxedI16, CPyBoxedI32, CPyDate, CPyEnum, CPyJson, CPyObject, CPyObject, CPyObjectProxy, CPyPrimitive, CPyRecord, CPyString

from dh__list_binary import ListBinaryHelper
from dh__list_enum_my_enum import ListEnumMyEnumHelper
from dh__list_int32_t import ListInt32THelper
from dh__list_record_rc import ListRecordRcHelper
from dh__map_enum_my_enum_int16_t import MapEnumMyEnumInt16THelper
from dh__map_enum_my_enum_int16_t import MapEnumMyEnumInt16TProxy
from dh__map_int32_t_string import MapInt32TStringHelper
from dh__map_int32_t_string import MapInt32TStringProxy
from dh__set_enum_my_enum import SetEnumMyEnumHelper
from dh__set_enum_my_enum import SetEnumMyEnumProxy
from dh__set_int32_t import SetInt32THelper
from dh__set_int32_t import SetInt32TProxy
from my_enum import MyEnum
from rc import Rc
from rc_helper import RcHelper
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

class MyRecord:
    c_data_set = MultiSet()

    @staticmethod
    def check_c_data_set_empty():
        assert len(MyRecord.c_data_set) == 0
        ListInt32THelper.check_c_data_set_empty()
        ListBinaryHelper.check_c_data_set_empty()
        SetInt32THelper.check_c_data_set_empty()
        MapInt32TStringHelper.check_c_data_set_empty()
        Rc.check_c_data_set_empty()
        ListRecordRcHelper.check_c_data_set_empty()
        MyEnum.check_c_data_set_empty()
        ListEnumMyEnumHelper.check_c_data_set_empty()
        SetEnumMyEnumHelper.check_c_data_set_empty()
        MapEnumMyEnumInt16THelper.check_c_data_set_empty()


    def __init__(self, test, test1, test2, test3, test31, test4, test41, test5, test6, test7, test8, test9, test10, test101, test11, test12, test13, test14, test15, test16, test17):
        self.test = test
        self.test1 = test1
        self.test2 = test2
        self.test3 = test3
        self.test31 = test31
        self.test4 = test4
        self.test41 = test41
        self.test5 = test5
        self.test6 = test6
        self.test7 = test7
        self.test8 = test8
        self.test9 = test9
        self.test10 = test10
        self.test101 = test101
        self.test11 = test11
        self.test12 = test12
        self.test13 = test13
        self.test14 = test14
        self.test15 = test15
        self.test16 = test16
        self.test17 = test17

