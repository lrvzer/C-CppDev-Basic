cmake_minimum_required(VERSION 3.22)
project(CMakeList2 C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        add_example.c
        sub_example.c)

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
    target_link_libraries(${filename} alg)
endforeach ()