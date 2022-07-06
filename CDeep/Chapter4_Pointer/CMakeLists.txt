set(MAIN_FILES
        Pointer_1_Nature.c
        Pointer_2_MultiPointer.c
        Pointer_3_FILE2Sqlite.c
        Pointer_4_SecondaryPStepSize.c
        Pointer_5_PArray1.c
        Pointer_6_PArray2.c
        Pointer_7_ArgEnv.c
        Pointer_8_1dHeap.c
        Pointer_9_Alloc2dSpace1.c
        Pointer_10_Alloc2dSpace2.c
        Pointer_11_Alloc2dSpace3.c
        Pointer_12_AppEncrypted.c
        Pointer_13_Readfile2mem.c
        Pointer_14_ConstModifyConstant.c
        Pointer_15_ConstModifyPointer.c
        Pointer_16_ConstAppStrcpy.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()