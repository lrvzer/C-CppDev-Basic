#include <iostream>

using namespace std;

class Shape {
    public:
        Shape(int x = 0, int y = 0) : _x(x), _y(y) {
            cout << "Shape: " << this << endl;
            cout << typeid(this).name() << endl;
        }

        void draw() {
            cout << "draw shape from (" << _x << ", " << _y << ")" << endl;
        }
    protected:
        int _x;
        int _y;
};

class Circle : public Shape {
    public:
        Circle(int x = 0, int y = 0, int r = 0) : Shape(x, y), _radius(r) {
            cout << "Circle: " << this << endl;
            cout << typeid(this).name() << endl;
        }
        void draw() {
            cout << "draw circle from (" << _x << ", " << _y << ") radius " << _radius << endl;
        }
    protected:
        int _radius;
};

int main() {

//    Shape s(1, 2);
//    s.draw();

    Circle c(3, 4);
    c.draw();

//    s = c;
//    s.draw();

//    Shape & rs = c;
//    rs.draw();

    cout << "=========" << endl;
    Shape *ps = &c;
    ps->draw();

    return 0;
}
