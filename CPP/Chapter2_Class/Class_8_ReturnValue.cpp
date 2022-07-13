#include <iostream>

using namespace std;

// 可以返回栈对象，不可以返回栈对象的引用
int stackRet() {
    int i = 0;
//    return &i; // error
    return i;
}

class A{
    public:
        A() {
            cout << "A() " << this << endl;
        }
        A(const A &another) {
            cout << "A(const A &another) " << this << " copy from " << &another << endl;
        }
        ~A() {
            cout << "~A() " << this << endl;
        }
};

// 函数参数传值：传值会发生一次构造，一次拷贝，两次析构
void passValue(A a) {

}

// 函数参数传引用：会发生一次构造，一次析构。所以传引用效率更高
void passReference(A &a) {

}

void pass(A *pa) {

}

// (N)RVO: (Name) Return Value Optimization
A returnWithNonName() {
    return A(); // 不具名返回
}

A returnWithName() {
    A a;
    return a; // 不具名返回
}

int main() {

//    A a;
//    passValue(a);
//    passReference(a);
//    pass(&a);

    A b = returnWithNonName();
//    A c = returnWithName();
    return 0;
}