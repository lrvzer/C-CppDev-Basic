cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        Memory_1_Heap.c
        Memory_2_malloc.c
        Memory_3_calloc.c
        Memory_4_realloc.c
        Memory_5_vla.c
        Memory_6_isNULL.c
        Memory_7_Return.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()