#include <iostream>

using namespace std;

// const 修饰类成员函数，不可以修饰全局函数
// const 构成重载问题

int add(int &a, int &b) {
    return a + b;
}

int add(const int &a, const int &b) {
    return a + b;
}

//int add(int &&a, int &&b) {
//    return a + b;
//}

class A {
    public:
        void foo() {

        }

        void foo() const {

        }
};

int main() {
    int a = 3, b = 5;
    cout << add(a, b) << endl;
    cout << add(3, 6) << endl;
    return 0;
}
