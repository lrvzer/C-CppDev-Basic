#include <iostream>

using namespace std;

// 多态形成的条件有3个
// 1.父类中有虚函数。加virtual 声明型关键字
// 2.子类override覆写了父类的虚函数。子类中同名，同参，同返回，才能构成覆写
// 3.子类对象赋给父类的指针，通过父类的指针调用虚函数，形成多态。

// 纯虚函数 virtual 没有实现体，被初始化为0
// 纯接口类，才配具体拥有纯虚函数。含有纯虚函数的类，称为抽象基类。
// 抽象基类，不可实例化

class Shape {
    public:
        explicit Shape(int x = 0, int y = 0) : _x(x), _y(y) {}
        virtual void draw() = 0; // 纯虚函数 virtual 没有实现体，被初始化为0
    protected:
        int _x;
        int _y;
};

class Circle : public Shape {
    public:
        explicit Circle(int x = 0, int y = 0, int r = 0) : Shape(x, y), _radius(r) {}
        virtual void draw() override {
            cout << "draw circle from (" << _x << ", " << _y << ") radius " << _radius << endl;
        }
    protected:
        int _radius;
};

class Rect : public Shape {
    public:
        explicit Rect(int x = 0, int y = 0, int w = 0, int l = 0) : Shape(x, y), _width(w), _length(l) {}
        virtual void draw() override {
            cout << "draw rect from (" << _x << ", " << _y << ") width " << _width << " length " << _length << endl;
        }
    protected:
        int _width;
        int _length;
};

int main() {
    Circle c(3, 4, 5);
    Shape *ps = &c;
    ps->draw();

    Rect r(1, 1, 2, 3);
    ps = &r;
    ps->draw();

    return 0;
}
