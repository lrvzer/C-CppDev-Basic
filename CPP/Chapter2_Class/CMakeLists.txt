set(MAIN_FILES
        Class_1_Date.cpp
        Class_2_Stack.cpp
        Class_3_List.cpp
        Class_4_CopyConstructor.cpp
        Class_5_this.cpp
        Class_6_AssignFuncOverload.cpp

        Class_8_ReturnValue.cpp
        Class_9_ObjectArray.cpp
        Class_10_MemberStorage.cpp
        )
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-elide-constructors")

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()


add_executable(Class_7_MyStringTest.cpp MyString.cpp Class_7_MyStringTest.cpp)