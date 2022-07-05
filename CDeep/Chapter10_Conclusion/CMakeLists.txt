set(MAIN_FILES
        App_1_MySnake.c
        App_2_ReadConf.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()