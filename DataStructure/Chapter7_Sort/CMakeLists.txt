cmake_minimum_required(VERSION 3.22)
project(DataStructure)

set(CMAKE_CXX_STANDARD 11)

set(MAIN_FILES
        quick_sort.cpp
        merge_sort.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()