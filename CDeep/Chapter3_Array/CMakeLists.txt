set(MAIN_FILES
        Array_1_1dArray.c
        Array_2_SubMax.c
        Array_3_2dArray.c
        Array_4_LineStorage.c
        Array_5_Delivery2dArray.c
        Array_6_ReturnHeapArray.c
        Array_7_Pointer.c
        Array_8_ArgAp.c
        Array_9_1d22d.c
        Array_10_ArrayName.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()