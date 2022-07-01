cmake_minimum_required(VERSION 3.22)
project(STL)

set(CMAKE_CXX_STANDARD 14)

set(MODULES
        Chapter1_Vector
        Chapter2_List
        Chapter3_Map
        Chapter4_Other
        Chapter5_Iterator
        Chapter6_Functor
        Chapter7_Algorithm
        Chapter8_Template
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()