set(MAIN_FILES
        Polymorphism_1_AssignCompatible.cpp
        Polymorphism_2_Condition.cpp
        Polymorphism_3_MultiInherit.cpp
        Polymorphism_4_Destructor.cpp
        Polymorphism_5_VirtualTable1.cpp
        Polymorphism_6_VirtualTable2.cpp
        Polymorphism_7_RTTI.cpp

        Polymorphism_8_App_Interface.cpp
        Polymorphism_10_RenderTree.cpp
        Polymorphism_11_AQ.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()


add_executable(Polymorphism_9_CocosEntry Polymorphism_9_CocosEntry.cpp CCApplication.cpp CCApplicationProtocol.cpp AppDelegate.cpp)