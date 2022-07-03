cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        Pointer_1_MemoryLine.c
        Pointer_2_VariableAddress.c
        Pointer_3_PointerConstant.c
        Pointer_4_PointerVariable.c
        Pointer_5_Nature.c
        Pointer_6_Declaration.c
        Pointer_7_Assignment.c
        Pointer_8_Null.c
        Pointer_9_MathOp.c
        Pointer_10_RelationOp.c
        Pointer_11_ArrayIdxVisit.c
        Pointer_12_1DArray.c
        Pointer_13_2DArray.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()