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

// 模版类继承模版类
template<typename T1, typename T2>
class B : public A <T1> {
    private:
        T2 b;
    public:
        B(T1 _a, T2 _b) : A<T1>(_a), b(_b) {}
        void printB() {
            cout << "B" << b << endl;
        }
};

int main() {
    B<int, float> b(10, 11.1f);
    b.printA();
    b.printB();
    return 0;
}