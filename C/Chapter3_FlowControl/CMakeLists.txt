cmake_minimum_required(VERSION 3.22)
project(C C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        if_else.c
        switch.c
        for.c
        while.c
        do_while.c
        break.c
        continue.c
        goto.c
        return.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()