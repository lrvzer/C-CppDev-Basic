#include <iostream>

using namespace std;

class A {
    private:
        int a;
    public:
        A(int _a) : a(_a) {}

        void printA() {
            cout << "A" << a << endl;
        }
};

// 模版类继承普通类
template<typename T>
class B : public A {
    private:
        T b;
    public:
        B(int _a, T _b) : A(_a), b(_b) {}
        void printB() {
            cout << "B" << b << endl;
        }
};

int main() {
    B<float> b(11, 10.2f);
    b.printA();
    b.printB();
    return 0;
}