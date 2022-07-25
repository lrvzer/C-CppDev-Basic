#include <iostream>
using namespace std;
class A {
    public:
        A() {
            p = this;
            p->func();
        }

        void foo() {
            this->func();
        }

        virtual void func() {
            cout << "aaaaaaaaaaaaaaaa" << endl;
        }

        ~A() {
            p = this;
            p->func();
        }
    private:
        A *p;
};
class B : public A {
    public:
        void func() {
            cout << "bbbbbbbbbbbbbbbbb" << endl;
        }
};

int main() {
    B b;
    b.foo();
    return 0;
}