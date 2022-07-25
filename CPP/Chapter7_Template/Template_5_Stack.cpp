#include <iostream>
#include "StackTemplate.h"
#include "StackTemplate.cpp"

using namespace std;

// 函数模版
// mySwap   ->   mySwap<int>    ->      mySwap<int>(int, int)

// 类模板
// Stack    ->   Stack<int>     ->      Stack<int> s

int main() {
    Stack<string> s(100);
    if (!s.isFull())
        s.push("abc");
    if (!s.isFull())
        s.push("yyy");
//    for (int i = 0; i < 10; ++i) {
//        if (!s.isFull())
//            s.push(i);
//    }
    while (!s.isEmpty())
        cout << s.pop() << endl;
    return 0;
}
