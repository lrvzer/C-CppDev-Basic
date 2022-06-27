cmake_minimum_required(VERSION 3.22)
project(C C)

set(CMAKE_C_STANDARD 99)

set(MODULES
        Chapter1_DataType
        Chapter2_Operator
        Chapter3_FlowControl
        Chapter4_Array
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()