cmake_minimum_required(VERSION 3.22)
project(STL)

set(CMAKE_CXX_STANDARD 14)

set(MAIN_FILES
        TemplateFunction.cpp
        TemplateClass.cpp
        TemplateTypename.cpp

        TemplateCustom.cpp
        TemplateCustomRecursive.cpp
        TemplateCustomIfSwitch.cpp
        TemplateCustomFor.cpp

        TemplateOuterInner.cpp
        TemplateInherit1.cpp
        TemplateInherit2.cpp
        TemplateInherit3.cpp
        TemplateInherit4.cpp
        TemplateParam.cpp

        Traits.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()