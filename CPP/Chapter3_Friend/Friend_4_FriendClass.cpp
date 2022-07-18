#include <iostream>
#include <cmath>

using namespace std;

// 前向声明，是一种不完全类型的声明，不能定义对象
// 可以定义指针和引用，作参数和返回值，仅用在函数声明
class Point;

class ManagePoint {
    public:
        static float getDistance(const Point &p1, const Point &p2);
        float getArea(const Point &p1, const Point &p2, const Point &p3);
};

class Point {
        friend class ManagePoint;
    public:
        Point(int x = 0, int y = 0) : _x(x), _y(y) {}

        void dump() {
            cout << "(" << _x << ", " << _y << ")" << endl;
        }

    private:
        float _x;
        float _y;
};

float ManagePoint::getDistance(const Point &p1, const Point &p2) {
    float dx = p1._x - p2._x;
    float dy = p1._y - p2._y;

    return sqrt(dx * dx + dy * dy);
}

float ManagePoint::getArea(const Point &p1, const Point &p2, const Point &p3) {
    float da = getDistance(p1, p2);
    float db = getDistance(p1, p3);
    float dc = getDistance(p2, p3);

    float p = (da + db + dc) / 2;

    return sqrt(p * (p - da) * (p - db) * (p - dc));
}

int main() {
    Point p1(3, 4);
    p1.dump();

    Point p2(7, 8);
    p2.dump();

    Point p3(-100, 900);

    ManagePoint mp;

    cout << "dis: " << ManagePoint::getDistance(p1, p2) << endl;
    cout << "area: " << mp.getArea(p1, p2, p3) << endl;
    return 0;
}