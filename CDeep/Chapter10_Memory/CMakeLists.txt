set(MAIN_FILES
        Memory_1_memset.cpp
        Memory_2_memcpy.cpp
        Memory_3_memmove.cpp
        Memory_4_memcmp.cpp
        Memory_5_memchr.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()