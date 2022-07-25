#include <iostream>

using namespace std;

// 闭包
// & 引用
// = 复制产生复本 const mutable

int main() {
    int x = 100, y = 200;
    auto f = [&x,y]() mutable {
        x = 50;
        y = 50;
        cout << x << " : " << y << endl;
    };
    f();
    cout << x << " : " << y << endl;
    return 0;
}

int main2() {
    int x = 100, y = 200;
    auto f = [=]() mutable {
        x = 50;
        y = 50;
        cout << x << " : " << y << endl;
    };
    f();
    cout << x << " : " << y << endl;
    return 0;
}

int main1() {
    int x = 100, y = 200;
    auto f = [&]() {
        x = 50;
        y = 50;
        cout << x << " : " << y << endl;
    };
    f();
    cout << x << " : " << y << endl;
    return 0;
}