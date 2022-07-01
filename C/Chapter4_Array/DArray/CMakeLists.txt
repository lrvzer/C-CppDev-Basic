cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        DArray_1_Introduce.c
        DArray_2_Initialize.c
        DArray_3_Address.c
        DArray_4_Ambiguity.c

        DArray_5_Chess.c
        DArray_6_Print.c
        DArray_7_Reverse.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()