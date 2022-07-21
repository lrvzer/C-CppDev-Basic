#include <iostream>

using namespace std;

class Base {
    public:
        virtual void g() { cout << "Base::g" << endl; }
        virtual void h() { cout << "Base::h" << endl; }
        virtual void j() { cout << "Base::j" << endl; }
};

class Drive : public Base {
    public:
        virtual void g() { cout << "Drive::g" << endl; }
        virtual void h1() { cout << "Drive::h1" << endl; }
        virtual void j1() { cout << "Drive::j1" << endl; }
};

typedef void (*FUNC)();

int main() {
    cout << "base size = " << sizeof(Base) << endl;
    Base b;
    cout << "对象的起始地址：" << &b << endl;
    // 32位机把long long换成int
    // 64位机寻址能力是八个字节
    cout << "虚函数表的地址：" << (int **) *(long long *) &b << endl;
    cout << "虚函数表第一个函数的地址：" << *((int **) *(long long *) &b) << endl;
    cout << "虚函数表第二个函数的地址：" << *((int **) *(long long *) &b + 1) << endl;

    FUNC pf = (FUNC) (*(int **) *(long long *) &b);
    pf();

    pf = (FUNC) (*((int **) *(long long *) &b + 1));
    pf();

    pf = (FUNC) (*((int **) *(long long *) &b + 2));
    pf();

    return 0;
}
