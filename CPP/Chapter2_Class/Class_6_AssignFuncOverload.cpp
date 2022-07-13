#include <iostream>

using namespace std;

// 系统提供默认的赋值运算符重载，也是一种浅赋值行为
// 如果对象中不存在由*构成的堆空间，此时默认也是可以满足需求
// 格式比较固定 A& operator=(const A &another)

class Date {
    public:
        Date(int y = 1970, int m = 1, int d = 1) : year(y), month(m), day(d) {}
        void dis() {
            cout << year << "-" << month << "-" << day << endl;
        }
        Date &operator=(const Date &another) {
            this->year = another.year;
            this->month = another.month;
            this->day = another.day;
            return *this;
        }
    private:
        int year;
        int month;
        int day;
};

int main() {

    Date d1(1997, 5, 12);
    d1.dis();

    Date d2(2000, 1, 1);
    d2.dis();

    d2 = d1;
    d2.dis();

    return 0;
}
