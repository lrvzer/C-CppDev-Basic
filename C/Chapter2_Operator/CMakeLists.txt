cmake_minimum_required(VERSION 3.22)
project(C C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        assignment.c
        arithmetic.c
        relational.c
        logical.c
        conditional.c
        comma.c
        sizeof.c
        expression.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()