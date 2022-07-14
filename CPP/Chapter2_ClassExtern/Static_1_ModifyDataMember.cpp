#include <iostream>

using namespace std;

// static修饰数据成员，需要初始化，不可以类内初始化
// 类外初始化需要类名空间，且不需static修饰

// 类的声明与实现分开的时候，初始化在xxx.cpp中

// 大小：static声明的数据成员，不占用类对象的大小，存储在data rw段
// 命名空间：即类名
// 访问：既可以通过对象访问，也可以不通过对象，直接通过类型访问
int c;
class A {
    public:
        int _m, _n;
        static int _share;
};

int A::_share = 100;

int main() {
    A a;
    cout << c << endl;
    cout << a._share << endl;
    cout << A::_share << endl;
    cout << a._m << endl;
    cout << a._n << endl;
    A::_share = 500;
    cout << a._share << endl;
    cout << A::_share << endl;
    return 0;
}
