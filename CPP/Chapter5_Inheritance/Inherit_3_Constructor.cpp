#include <iostream>

using namespace std;

/*
    标配 1 空体无参 2 重载 3 默认参数
    子类的构造过程中 构造顺序: 父类 内嵌子对象 子类
    调用父类的构造器，标配会被调用，没有标配必须显式调用
    隐式调用：必须有标配
    显式调用
*/
class C {
    public:
        C(int k) {
            cout << "C()" << endl;
            _ic = k;
        }
        int _ic;
};

class A {
    public:
        A(int i = 0) : _ia(i) {
            cout << "A()" << endl;
        }
        int _ia;
};

class B : public A {
    public:
        B(int i, int j, int k)
            : A(i), _cc(k), _ib(j) {
            cout << "B()" << endl;
        }
        int _ib;
        C _cc;
};

int main() {
    B b(3, 5, 4);
    cout << b._ia << endl;
    cout << b._ib << endl;
    cout << b._cc._ic << endl;
    return 0;
}
