#include <iostream>

using namespace std;

// 一个对象所占的空间大小只取决于该对象中数据成员所占的空间，而与成员函数无关

// 类的成员函数只有一份，在对象调用过程中，传入对象的地址，具体可以表现为this

class Time {
    private:
        int hour;
        int minute;
        int sec;
    public:
        Time(int h, int m, int s) : hour(h), minute(m), sec(s) {}
        void dis() const {
            cout << hour << ":" << minute << ":" << sec << endl;
        }
};

int main() {
    cout << sizeof(Time) << endl;

    Time t1(1, 2, 3);
    t1.dis();

    Time t2(4, 5, 6);
    t2.dis();
    return 0;
}
