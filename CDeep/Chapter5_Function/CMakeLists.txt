set(MAIN_FILES
        Func_1_FunctionPointer.c
        Func_2_FuncpArray.c
        Func_3_Callback.c
        Func_4_Qsort.c
        Func_5_QsortString.c
        Func_6_Qsort2Level.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()