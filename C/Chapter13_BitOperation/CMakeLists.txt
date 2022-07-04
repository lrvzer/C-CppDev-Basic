set(MAIN_FILES
        Bit_1_DisplayBin.c
        Bit_2_Mask.c
        Bit_3_CircleMove.c
        Bit_4_Swap.c
        Bit_5_Encrypt.c
        Bit_6_Encryt2.c
        Bit_7_CircleMoveEncrypt.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()