#include <iostream>

using namespace std;

// 临时变量，即不可取地址的对象

// 常量  500
// 表达式 a+b
// 函数返回值
// 类型不同的变量

int foo() {
    int a = 100;
    return a;
}

int main() {
    double d = 3.14;
    const int &rd = d;
    cout << "d = " << d << endl;
    cout << "rd = " << rd << endl;

    d = 4.14;
    cout << "d = " << d << endl;
    cout << "rd = " << rd << endl;
}

int main1() {

    const int &cc = 500;

    int a = 3, b = 2;
    const int &ret = a + b;

    const int &ra = foo();

    double d = 100.12;
    const int &rd = d;

    return 0;
}
