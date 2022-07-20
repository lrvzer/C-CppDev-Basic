#include <iostream>
using namespace std;

class C {
    public:
        C() {
            cout << "C()" << endl;
        }

        C &operator=(const C &another) {
            cout << "C& operator=(const C &another)" << endl;
            return *this;
        }
};

class A {
    public:
        A(int a = 0) : _a(a) {
            cout << "A()" << endl;
        }

        A &operator=(const A &another) {
            if (this == &another)
                return *this;
            cout << "A& operator=(const A &another)" << endl;
            this->_a = another._a;
            return *this;
        }

        int _a;
};

class B : public A {
    public:
        B(int a, int b = 0) : A(a), _b(b) {
            cout << "B()" << endl;
        }

        B &operator=(const B &another) {
            cout << "B& operator=(const B &another)" << endl;
            if (this == &another) {
                return *this;
            }
            A::operator=(another);
            this->c = another.c;
            this->_b = another._b;
            return *this;
        }

        int _b;
        C c;
};

int main() {
    B b(1, 2);
    B bb(3, 4);
    bb = b;

    cout << "-----" << endl;
    cout << b._a << endl;
    cout << b._b << endl;
    cout << "-----" << endl;
    cout << bb._a << endl;
    cout << bb._b << endl;
    return 0;
}
