#include <iostream>

using namespace std;

template<typename T>
class A {
    private:
        T a;
    public:
        A(T _a) : a(_a) {}

        void printA() {
            cout << "A" << a << endl;
        }
};

// 普通类继承模版类
class B : public A <int> {
    private:
        float b;
    public:
        B(int _a, int _b) : A<int>(_a), b(_b) {}
        void printB() {
            cout << "B" << b << endl;
        }
};

int main() {
    B b(10, 11.0f);
    b.printA();
    b.printB();
    return 0;
}