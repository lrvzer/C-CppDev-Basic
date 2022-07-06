set(MAIN_FILES
        Array_1_1dArray.c
        Array_2_ReturnHeapArray.c
        Array_3_SubMax.c
        Array_4_2dArray.c
        Array_5_LineStorage.c
        Array_6_Delivery2dArray.c
        Array_7_Pointer.c
        Array_8_ArgAp.c
        Array_9_1d22d.c
        Array_10_ArrayName.c
        Array_11_Review.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()