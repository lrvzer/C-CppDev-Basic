#include <iostream>

using namespace std;
// class B中虽然没有覆写，但void foo()在其中依然是虚函数。
// class C中覆写了虚函数，多态依然是成立的。并且此时，用祖父类的指针A*指向C类的对象，依然是可以实现多态的。
class A {
    public:
        virtual void foo() {
            cout << "A::foo" << endl;
        }
};

class B : public A {

};

class C : public B {
    public:
        virtual void foo() override {
            cout << "C::foo" << endl;
        }
};

int main() {
    C c;
    B *p = &c;
//    A *p = &c;
    p->foo();
    return 0;
}
