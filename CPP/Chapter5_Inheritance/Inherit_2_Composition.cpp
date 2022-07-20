#include <iostream>
#include <typeinfo>

using namespace std;

class A {
    public:
        A() {
            cout << "A()" << endl;
            cout << "&_ia: " << &_ia << endl;
            cout << "A-this: " << this << endl;
            cout << "Type A this " << typeid(this).name() << endl;
        }
        int _ia;
};

class B : public A {
    public:
        B() {
            cout << "B()" << endl;
            cout << "&_ib: " << &_ib << endl;
            cout << "B-this: " << this << endl;
            cout << "Type B this " << typeid(this).name() << endl;
        }
        int _ib;
};

class C : public B {
    public:
        C() {
            cout << "C()" << endl;
            cout << "&_ic: " << &_ic << endl;
            cout << "C-this: " << this << endl;
            cout << "Type C this " << typeid(this).name() << endl;
        }

        void func() {
            cout << "C::func" << endl;
        }
        int _ic;
};

int main() {
    C c;

    cout << "=========" << endl;
    cout << "&_ic: " << &c << endl;
    c.func(); // C的个性

    cout << "=========" << endl;

    cout << "sizeof(A) = " << sizeof(A) << endl;
    cout << "sizeof(B) = " << sizeof(B) << endl;
    cout << "sizeof(C) = " << sizeof(C) << endl;

    return 0;
}
