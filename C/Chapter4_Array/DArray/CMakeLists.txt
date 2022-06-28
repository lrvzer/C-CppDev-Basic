cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        d_introduce.c
        d_initialize.c
        d_address.c
        d_ambiguity.c

        app_chess.c
        app_print.c
        app_reverse.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()