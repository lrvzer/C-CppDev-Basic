cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        Struct_1_Define.c
        Struct_2_InitVisit.c
        Struct_3_Assignment.c
        Struct_4_Return.c
        Struct_5_Array.c
        Struct_6_AppVote.c
        Struct_7_Nest.c
        Struct_8_Memory.c
        Struct_9_Caution1.c
        Struct_10_Caution2.c
        Struct_11_Stack.c
        Struct_12_Typedef.c

        Union.c
        Enum.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()