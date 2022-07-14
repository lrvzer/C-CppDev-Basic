#include <iostream>

using namespace std;

// static修饰成员函数，主要用来管理静态变量
// 类内外：声明和定义

// 静态成员函数，只能访问静态的成员，不能访问非静态的成员
// 是因为静态成员函数中没有this指针

// 非静态函数，是可以访问静态的成员

class A {
    public:
        static void manageA();
        static void foo() {
        }

        void func() {
            foo();
        }
    private:
        static int a;
        int _x;
};

void A::manageA() {

//    cout << _x << endl; // error

    cout << a << endl;
    foo();
}

int A::a = 100;

int main() {

    return 0;
}
