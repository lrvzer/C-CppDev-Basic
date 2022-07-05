set(MAIN_FILES
        Sort_1_selectSort.c
        Sort_2_popSort.c
        Sort_3_quickSort.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()