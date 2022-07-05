set(MAIN_FILES
        String_1_RawString.c
        String_3_Printf.c
        String_4_atoi.c
        String_5_strchr.c
        String_6_strstr.c
        String_7_strtok.c
        String_8_trim.c
        String_9_reverseStr.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()

add_executable(String_2_MyString String_2_MyString.c myString.c)