#include <iostream>

using namespace std;

class Date {
    public:
        // 构造器
        Date(int y, int m, int d) {
            year = y;
            month = m;
            day = d;
        }

        bool isLeapYear() {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                return true;
            return false;
        }

        void display() {
            cout << year << " - " << month << " - " << day << endl;
        }

    private:
        int year, month, day;
};

int main() {
    Date d(1996, 3, 12);
    cout << d.isLeapYear() << endl;
    d.display();
    return 0;
}
