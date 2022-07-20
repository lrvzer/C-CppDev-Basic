cmake_minimum_required(VERSION 3.22)
project(CPP)

set(CMAKE_CXX_STANDARD 11)

set(MODULES
        Chapter1_ExtensionC
        Chapter2_Class
        Chapter2_ClassExtern
        Chapter3_Friend
        Chapter4_OperatorOverload
        Chapter5_Inheritance
        Chapter6_Polymorphism
        Chapter7_Template
        Chapter8_IO
        Chapter9_File
        Chapter10_Exception
        )


foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()