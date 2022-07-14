#include <iostream>
using namespace std;

// const 修饰对象，其内可以有非const数据成员，但不可修改；只能调用const成员函数
// 针对const有可能修饰对象，往往提供两个版本，构成重载

class A {
    private:
        int _x;
        int _y;
    public:
        A(int x, int y);

        void dis();

        void dis() const;
};
A::A(int x, int y) : _x(x), _y(y) {}

void A::dis() {
    cout << _x << _y << endl;
}

void A::dis() const {
    cout << _x << _y << endl;
}

int main() {
    const A a(3, 4);
    a.dis();
    return 0;
}
