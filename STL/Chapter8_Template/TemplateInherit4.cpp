#include <iostream>

using namespace std;

template<typename T>
class A {
    private:
        T a;
    public:
        typedef T vType;
        A(T _a) : a(_a) {}

        void printA() {
            cout << "A" << a << endl;
        }
};

// 模版类继承类型参数
template<typename T1, typename T2>
class B : public T2{
    private:
        T1 b;
    public:
        B(typename T2::vType _a, T1 _b) : T2(_a), b(_b) {}
        void printB() {
            cout << "B" << b << endl;
        }
};

int main() {
    B<int, A<int>> b(10, 11);
    b.printA();
    b.printB();
    return 0;
}