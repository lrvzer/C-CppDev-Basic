cmake_minimum_required(VERSION 3.22)
project(STL)

set(CMAKE_CXX_STANDARD 14)

set(MAIN_FILES
        VectorIntroduce.cpp
        VectorIterator.cpp
        VectorInsert.cpp
        VectorEraseRemove.cpp
        VectorMemoryManage1.cpp
        VectorMemoryManage2.cpp
        VectorMemoryManage3.cpp
        VectorMemoryManage4.cpp
        VectorInvalidIterator.cpp
        VectorMultiSpace.cpp
        VectorApplication.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()