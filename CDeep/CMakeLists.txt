cmake_minimum_required(VERSION 3.22)
project(CDeep)

set(CMAKE_C_STANDARD 11)

set(MODULES
        Chapter1_DataType
        Chapter2_ProcessSpace
        Chapter3_Array
        Chapter4_Pointer
        Chapter5_Function
        Chapter6_Sort
        Chapter7_Search
        Chapter8_List
        Chapter9_String
        Chapter10_Conclusion
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()