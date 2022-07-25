#include <iostream>
#include <typeinfo>

using namespace std;
// class B中虽然没有覆写，但void foo()在其中依然是虚函数。
// class C中覆写了虚函数，多态依然是成立的。并且此时，用祖父类的指针A*指向C类的对象，依然是可以实现多态的。
class A {
    public:
        A() {
            cout << "A()" << endl;
        }
        virtual void foo() = 0;
};

class B : public A {
    public:
        B();
        void init();
        static B *returnB();
    private:
        static B *pb;
};

B *B::pb = 0;

B::B() {
    pb = this;
    cout << "B()" << endl;
}

B *B::returnB() {
    cout << typeid(pb).name() << endl;
    return pb;
}

void B::init() {
    this->foo();
}

class C : private B {
    public:
        C() {
            cout << "C()" << endl;
        }
        virtual void foo() override {
            cout << "C::foo" << endl;
        }
};

int main() {
//    C c;
//    B *p = &c;
//    A *p = &c;
//    p->foo();
    C c;

    B::returnB()->foo();

    return 0;
}
