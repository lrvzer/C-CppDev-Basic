cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        Function_1_Rand.c
        Function_2_Localtime.c
        Function_3_Math.c
        Function_4_Max.c
        Function_5_PassByValue.c
        Function_6_PassByAddress.c
        Function_7_Swap.c
        Function_8_Recursive.c
        Function_9_1DArray.c
        Function_10_2DArray.c
        Function_11_SelectSort.c
        )


foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()