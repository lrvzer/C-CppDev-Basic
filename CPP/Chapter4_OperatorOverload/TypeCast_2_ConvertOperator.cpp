#include <iostream>

using namespace std;

/**
 * 转换构造函数的本质也是构造函数
 * class 源类{
 *     operator 目标类() const { // const 建议加上
 *         return 目标类(源类实参);
 *     }
 * }
 * 特点：无参数，无返回
 */


class Point3D {
    public:
        Point3D(int x = 0, int y = 0, int z = 0) : _x(x), _y(y), _z(z) {}

        friend ostream &operator<<(ostream &co, const Point3D &p) {
            co << "(" << p._x << ", " << p._y << ", " << p._z << ")" << endl;
            return co;
        }

    private:
        int _x;
        int _y;
        int _z;
};

class Point2D {
    public:
        Point2D(int x = 0, int y = 0) : _x(x), _y(y) {}

        operator Point3D(void) {
            return Point3D(this->_x, this->_y, rand() % 100);
        }

        friend ostream &operator<<(ostream &co, const Point2D &p) {
            co << "(" << p._x << ", " << p._y << ")" << endl;
            return co;
        }
    private:
        int _x;
        int _y;
};

int main() {
    srand(time(nullptr));

    Point2D d2(5, 4);
    cout << d2;

    Point3D d3 = d2;
    cout << d3;

    return 0;
}
