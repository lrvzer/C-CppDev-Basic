set(MAIN_FILES
        List_1_dliststatic.c
        List_2_dlist.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()