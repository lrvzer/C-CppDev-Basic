cmake_minimum_required(VERSION 3.22)
project(C C)

set(CMAKE_C_STANDARD 99)

set(MODULES
        Chapter1_DataType
        Chapter2_Operator
        Chapter3_FlowControl
        Chapter4_Array
        Chapter5_Pointer
        Chapter6_Function
        Chapter7_VariableScope
        Chapter8_String
        Chapter9_Memory
        Chapter10_Struct_Union_Enum
        Chapter11_List
        Chapter12_File
        Chapter13_BitOperation
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()