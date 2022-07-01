cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        Operator_1_Assignment.c
        Operator_2_Arithmetic.c
        Operator_3_Relational.c
        Operator_4_Logical.c
        Operator_5_Conditional.c
        Operator_6_Comma.c
        Operator_7_Sizeof.c
        Operator_8_Expression.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()