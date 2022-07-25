#include <iostream>

using namespace std;

// 注意在多态体系中，要想应用 dynamic_cast，必须虚析构

class A {
    public:
        virtual ~A() {}
};
class B : public A {};
class C : public A {};

int main() {
    A *p = new B;

    B *pb = dynamic_cast<B *>(p);
    if (pb != nullptr) {
        cout << "pb -> new B" << endl;
    }

    C *pc = dynamic_cast<C *>(p);
    if (pc != nullptr) {
        cout << "pc -> new C" << endl;
    } else {
        cout << "pc !-> new C" << endl;
    }

    return 0;
}
