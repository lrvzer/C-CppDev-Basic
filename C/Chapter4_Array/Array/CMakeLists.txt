cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        Array_1_Introduce.c
        Array_2_Initialize.c
        Array_3_Address.c
        Array_4_Ambiguity.c
        Array_5_VLA.c

        Array_6_AveSum.c
        Array_7_MaxMin.c
        Array_8_SelectSort.c
        Array_9_SelectSortPro.c
        Array_10_BinarySearch.c
        Array_11_Merge.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()