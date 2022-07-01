cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        FlowControl_1_IfElse.c
        FlowControl_2_Switch.c
        FlowControl_3_For.c
        FlowControl_4_While.c
        FlowControl_5_DoWhile.c
        FlowControl_6_Break.c
        FlowControl_7_Continue.c
        FlowControl_8_Goto.c
        FlowControl_9_Return.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()