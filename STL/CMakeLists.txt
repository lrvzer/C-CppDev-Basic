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

# Map
add_executable(MapConstructor Map/MapConstructor.cpp)
add_executable(MapInsert Map/MapInsert.cpp)
add_executable(MapBound Map/MapBound.cpp)
add_executable(MapEqualRange Map/MapEqualRange.cpp)
add_executable(SetIntroduce Map/SetIntroduce.cpp)

# Other
add_executable(DequeStack Other/DequeStack.cpp)
add_executable(Stack Other/Stack.cpp)
add_executable(Queue Other/Queue.cpp)
add_executable(PriorityQueue Other/PriorityQueue.cpp)

# Iterator
add_executable(AuxiliaryIterator Iterator/AuxiliaryIterator.cpp)
add_executable(OstreamIterator Iterator/OstreamIterator.cpp)

# Functor
add_executable(Bindx Functor/Bindx.cpp)
add_executable(BindMemFunction1 Functor/BindMemFunction1.cpp)
add_executable(BindMemFunction2 Functor/BindMemFunction2.cpp)

# Algorithm
# 排序
add_executable(Sort Algorithm/Sort.cpp)
add_executable(Partition Algorithm/Partition.cpp)
add_executable(Shuffle Algorithm/Shuffle.cpp)
# 查找
add_executable(Find Algorithm/Find.cpp)
add_executable(Search Algorithm/Search.cpp)
add_executable(Search_n Algorithm/Search_n.cpp)
# 删除和替换
add_executable(Remove Algorithm/Remove.cpp)
add_executable(Unique Algorithm/Unique.cpp)
# 排列组合
add_executable(Permutation Algorithm/Permutation.cpp)
# 集合
add_executable(SetUnion Algorithm/SetUnion.cpp)
add_executable(SetDiff Algorithm/SetDiff.cpp)
add_executable(SetIntersection Algorithm/SetIntersection.cpp)

# Application
add_executable(VectorApplication Application/VectorApplication.cpp)