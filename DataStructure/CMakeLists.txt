cmake_minimum_required(VERSION 3.22)
project(DataStructure)

set(CMAKE_CXX_STANDARD 11)

set(MODULES
        Chapter1_Introduce
        Chapter7_Sort
        Chapter8_Algorithm
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()