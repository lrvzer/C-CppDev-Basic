cmake_minimum_required(VERSION 3.22)
project(CMakeList1 C)

set(CMAKE_C_STANDARD 99)

# 阶段一
#add_executable(add_example add_example.c add.c)
#add_executable(sub_example sub_example.c sub.c)

# 阶段二
set(SOURCES
        add.c
        sub.c
        )

set(HEADERS
        add.h
        sub.h
        )

add_library(alg STATIC ${SOURCES})

set(MAIN_FILES
        add_example.c
        sub_example.c)

foreach (files ${MAIN_FILES})
    get_filename_component(filename ${files} NAME_WE)
    add_executable(${filename} ${files})
    target_link_libraries(${filename} alg)
endforeach ()