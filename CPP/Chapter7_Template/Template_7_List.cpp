#include <iostream>
#include "MyListTemplate.hpp"
using namespace std;
using namespace listspace;

// 类模版中的友元
// 1 在声明出（推荐）
// 2 在类外的定义处
//  1.在类中声明<>表明，是个声明
//  2.在类外实现
//  3.在类的声明前面，作前向声明，并且在其前作类的前向声明

int main() {

    GenericList<int> first_list(2);
    first_list.add(1);
    first_list.add(2);
    cout << "first_list = \n" << first_list;

    GenericList<char> second_list(10);
    second_list.add('A');
    second_list.add('B');
    second_list.add('C');
    cout << "second_list = \n" << second_list;

    return 0;
}
