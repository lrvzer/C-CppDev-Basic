cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        String_1_Constant.c
        String_2_CharArrString.c
        String_3_CharArrString.c
        String_4_InOut.c
        String_5_strlen.c
        String_6_strcat.c
        String_7_strcpy.c
        String_8_strcmp.c
        String_9_PointerArray.c
        String_10_Sort.c
        String_11_ArgcArgv.c
        )

set(MODULES
        libString
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()