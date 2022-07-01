#include <iostream>

using namespace std;

template<typename T>
class A {
    public:
        void print();
};

template<typename T>
void A<T>::print() {
    cout << "A" << endl;
}

template<
    // 模板类的格式
    template<class X>
    class T
>
class B {
    private:
        T<int> a;
    public:
        void print();
};

template<template<class X> class T>
void B<T>::print() {
    cout << "B" << endl;
    a.print();
}

int main() {
    B<A> b{};
    b.print();
    return 0;
}
