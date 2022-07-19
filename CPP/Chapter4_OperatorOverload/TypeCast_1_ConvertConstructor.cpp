#include <iostream>

using namespace std;

// 转化构造函数的本质也是构造函数

// explicit

class Point2D {
        friend class Point3D;
    public:
        Point2D(int x = 0, int y = 0) : _x(x), _y(y) {}
        friend ostream &operator<<(ostream &co, const Point2D &p) {
            co << "(" << p._x << ", " << p._y << ")" << endl;
            return co;
        }
    private:
        int _x;
        int _y;
};

class Point3D {
    public:
        Point3D(int x = 0, int y = 0, int z = 0) : _x(x), _y(y), _z(z) {}

//        Point3D(const Point2D &p) { // 类的构造函数无关键字explicit修饰，其构造函数由单个（默认）参数组成，当类初始化时，可直接用参数初始化，是一种自动类型转化（隐式）
        explicit Point3D(const Point2D &p) { // 类的构造函数有关键字explicit修饰，必须显式调用构造器完成转化，或者进行强制类型转化
            this->_x = p._x;
            this->_y = p._y;
            this->_z = rand() % 100;
        }

        friend ostream &operator<<(ostream &co, const Point3D &p) {
            co << "(" << p._x << ", " << p._y << ", " << p._z << ")" << endl;
            return co;
        }

    private:
        int _x;
        int _y;
        int _z;
};

int main() {
    srand(time(nullptr));

    Point2D d2(5, 4);
    cout << d2;

    //  不加explict修饰构造器
//    Point3D d3 = d2; // error when 'explicit' modify Point3D(const Point2D &p);

    //  加explict修饰构造器
    Point3D d3(d2); // 显式调用
    Point3D d4 = (Point3D) d2; // 隐式调用
    Point3D d6 = static_cast<Point3D>(d2); // 隐式调用
    cout << d3;

    return 0;
}
