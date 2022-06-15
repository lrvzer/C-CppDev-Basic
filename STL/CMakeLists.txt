cmake_minimum_required(VERSION 3.22)
project(STL)

set(CMAKE_CXX_STANDARD 14)

# Vector
add_executable(VectorIntroduce Vector/VectorIntroduce.cpp)
add_executable(VectorIterator Vector/VectorIterator.cpp)
add_executable(VectorInsert Vector/VectorInsert.cpp)
add_executable(VectorEraseRemove Vector/VectorEraseRemove.cpp)
add_executable(VectorPrintElem Vector/VectorPrintElem.cpp)
add_executable(VectorMemoryManage1 Vector/VectorMemoryManage1.cpp)
add_executable(VectorMemoryManage2 Vector/VectorMemoryManage2.cpp)
add_executable(VectorMemoryManage3 Vector/VectorMemoryManage3.cpp)
add_executable(VectorMemoryManage4 Vector/VectorMemoryManage4.cpp)
add_executable(VectorInvalidIterator Vector/VectorInvalidIterator.cpp)
add_executable(VectorMultiSpace Vector/VectorMultiSpace.cpp)


# List
add_executable(ListInit List/ListIntroduce.cpp)
add_executable(ListConstructor List/ListConstructor.cpp)
add_executable(ListNonmodifyingOperations List/ListNonmodifyingOperations.cpp)
add_executable(ListIterator List/ListIterator.cpp)
add_executable(ListInsert List/ListInsert.cpp)
add_executable(ListEraseRemove List/ListEraseRemove.cpp)
add_executable(ListSpecialModifyingOperations List/ListSpecialModifyingOperations.cpp)
add_executable(Bindx List/Bindx.cpp)