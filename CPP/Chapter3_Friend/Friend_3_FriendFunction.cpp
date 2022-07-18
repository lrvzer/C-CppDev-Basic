#include <iostream>
#include <cmath>

using namespace std;

class Point {
        friend float getDistance(const Point &p1, const Point &p2);
    public:
        Point(int x = 0, int y = 0) : _x(x), _y(y) {}

        void dump() {
            cout << "(" << _x << ", " << _y << ")" << endl;
        }

    private:
        float _x;
        float _y;
};

float getDistance(const Point &p1, const Point &p2) {
    float dx = p1._x - p2._x;
    float dy = p1._y - p2._y;

    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1(3, 4);
    p1.dump();

    Point p2(7, 8);
    p2.dump();
    cout << getDistance(p1, p2) << endl;
    return 0;
}
