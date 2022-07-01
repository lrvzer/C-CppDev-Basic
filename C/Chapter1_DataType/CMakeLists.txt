cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        DataType_1_HelloWorld.c
        DataType_2_Binary.c
        DataType_3_VariableNamingRules.c
        DataType_4_SizeOfType.c
        DataType_5_FloatCmpZero.c
        DataType_6_ValidBit.c
        DataType_7_ASCII.c
        DataType_8_Constant.c
        DataType_9_Printf.c
        DataType_10_Scanf.c
        DataType_11_ForceCast.c
        DataType_12_TypeCastPromote1.c
        DataType_13_TypeCastPromote2.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()