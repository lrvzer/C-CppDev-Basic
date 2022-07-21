#include <iostream>

using namespace std;

class A {
    public:
        virtual ~A() {}    //    若无此虚函数， 则称运行时信息不成立
};

class B : public A {
};

class C : public A {
};
// 引用和解引用的指针，在多态体系中，均可以通过typeid获得真实有效的信息。注意在多态体系中，要想应用typeid，必须虚析构
#if 0
int main() {
    B b;
    C c;
    A &p1 = b;
    A &p2 = c;
    A &p3 = b;

    if (typeid(p1) == typeid(p2)) {
        cout << "p1 type == p2 type" << endl;
    }

    if (typeid(p1) == typeid(p3)) {
        cout << "p1 type == p3 type" << endl;
    }
    return 0;
}
#endif

#if 0
int main() {
    B b;
    C c;
    A *p1 = &b;
    A *p2 = &c;
    A *p3 = &b;

    if (typeid(*p1) == typeid(*p2)) {
        cout << "p1 type == p2 type" << endl;
    }

    if (typeid(*p1) == typeid(*p3)) {
        cout << "p1 type == p3 type" << endl;
    }
    return 0;
}
#endif

#if 1
int main() {
    // 基本类型
    cout << typeid(char).name() << endl;
    cout << typeid(short).name() << endl;
    cout << typeid(int).name() << endl;
    cout << typeid(long long).name() << endl;
    cout << typeid(float).name() << endl;
    cout << typeid(double).name() << endl;

    // 函数类型
    void (*pf)(int);
    cout << typeid(pf).name() << endl;

    // 指针类型
    cout << typeid(int *).name() << endl;
    cout << typeid(const int *).name() << endl;
    cout << typeid(int *const).name() << endl;
    return 0;
}
#endif