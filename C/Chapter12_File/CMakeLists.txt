set(MAIN_FILES
        File_1_fopenfclose.c
        File_2_fputcfgetc.c
        File_3_copy.c
        File_4_fputsfgets.c
        File_5_feof.c
        File_6_freadfwrite.c
        File_7_fread_return.c
        File_8_encode_decode.c
        File_9_struct_fread.c
        File_10_management.c
        )


foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()