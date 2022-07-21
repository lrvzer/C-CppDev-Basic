#include <iostream>

using namespace std;

class Base {
    public:
        Base() {
            cout << "Base-this: " << this << endl;
            cout << "Base-&a: " << &a << endl;
        }
        virtual void g1() { cout << "Base::g" << endl; }
        virtual void g2() { cout << "Base::g" << endl; }
    private:
        int a;
};

class Derive : public Base {
    public:
        Derive() {
            cout << "Derive-this: " << this << endl;
            cout << "Derive-&b: " << &b << endl;
        }
    private:
        int b;
};

int main() {
    Derive d;
    cout << &d << endl;
}

/* 无虚函数
Base-this: 0x16eec3328
Base-&a: 0x16eec3328
Derive-this: 0x16eec3328
Derive-&b: 0x16eec332c
 */

/* 有n（n >= 1）个虚函数
Base-this: 0x16dce3320
Base-&a: 0x16dce3328
Derive-this: 0x16dce3320
Derive-&b: 0x16dce332c
*/

// 基址到首元素中间有一个指针

/*

 */
