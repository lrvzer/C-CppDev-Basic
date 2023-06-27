cmake_minimum_required(VERSION 3.22)
project(CPP)

set(MAIN_FILES
        Template_1_Function.cpp
        Template_2_StandardLib.cpp
        Template_3_QuickSort.cpp
        Template_4_Special.cpp

        Template_6_STLStack.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()


add_executable(StackTemplate StackTemplate.cpp Template_5_Stack.cpp)
add_executable(MyListTemplate MyListTemplate.hpp Template_7_List.cpp)
add_executable(MyComplex Template_0_complex.cpp complex.cpp)