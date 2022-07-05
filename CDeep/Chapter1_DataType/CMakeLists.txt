set(MAIN_FILES
        DataType_1_Format.c
        DataType_2_Init.c
        DataType_3_TypeCast.c
        DataType_4_Unsigned.c
        DataType_5_Exec.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()