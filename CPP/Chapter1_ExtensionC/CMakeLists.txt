set(MAIN_FILES
        EC_1_TypeEnhance.cpp
        EC_2_CIN.cpp
        EC_3_COUT.cpp
        EC_4_FunctionOverload.cpp

        EC_6_OperatorOverload.cpp
        EC_7_Reference1.cpp
        EC_8_Reference2.cpp
        EC_9_Reference3.cpp
        EC_10_Reference4.cpp
        EC_11_inline.cpp
        EC_12_namespace1.cpp
        EC_13_namespace2.cpp
        EC_14_namespace3.cpp

        EC_TypeCast_static_cast.cpp
        EC_TypeCast_reinterpret_cast.cpp
        EC_TypeCast_const_cast.cpp
        EC_TypeCast_dynamic_cast.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()

add_executable(EC_5_NameMangling myString.cpp EC_5_NameMangling.cpp)