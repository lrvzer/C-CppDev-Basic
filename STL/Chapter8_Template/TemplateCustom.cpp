#include <iostream>

using namespace std;

template<typename T1, typename T2>
class A {
    public:
        void print() {
            cout << "A<T1, T2>::print" << endl;
        }
};

// 类模版的全特化
template<>
class A<int, float> {
    public:
        void print() {
            cout << "A<int, float>::print" << endl;
        }
};

// 类模版的偏特化
template<typename T1>
class A<T1, float> {
    public:
        void print() {
            cout << "A<T1, float>::print" << endl;
        }
};


template<typename T1, typename T2>
void foo(T1 a, T2 b) {
    cout << "foo(T1 a, T2 b)" << endl;
}
// 函数模版的全特化
template<>
void foo(int a, int b) {
    cout << "foo(int a, int b)" << endl;
}

int main() {
    A<int, int> a1;
    a1.print();

    A<int, float> a2;
    a2.print();

    A<char, float> a3;
    a3.print();

    foo(10, 111.0f);
    foo(10, 111);
    return 0;
}