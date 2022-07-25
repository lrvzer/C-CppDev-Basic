#include <iostream>

using namespace std;

// final 修饰的类不可被继承，修饰的虚函数函数不可被覆写
// only virtual member functions can be marked 'final' 
// and these functions can not be overrided by child class

class A //final 
{
public:
    virtual void func() = 0;
};

class B : public A
{
public:
    virtual void func() override final {}
    // void foo() final {} // 不能使用 "final" 修饰符声明非虚函数
};

class C : public B {
public:
    // virtual void func() override final {} //error: declaration of 'func' overrides a 'final' function
};

int main() {

    B b;
    return 0;
}