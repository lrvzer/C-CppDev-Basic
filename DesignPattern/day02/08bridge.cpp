#include <iostream>

using namespace std;

class Line
{
public:
    virtual void drawLine() = 0;
};

class DotLine : public Line
{
public:
    void drawLine()
    {
        cout << "dot line" << endl;
    }
};

class SolidLine : public Line
{
public:
    void drawLine()
    {
        cout << "solid line" << endl;
    }
};
class Shape
{
public:
    Shape(int x = 0, int y = 0, Line *pl = nullptr) : _x(x), _y(y), _pl(pl) {}
    virtual void drawShape() = 0;

protected:
    int _x, _y;
    Line *_pl;
};

class Circle : public Shape
{
public:
    Circle(int x = 0, int y = 0, int ridus = 0, Line *pl = nullptr) : Shape(x, y, pl), _ridus(ridus) {}
    void drawShape()
    {
        cout << "draw from (" << _x << ", " << _y << ") ridus: " << _ridus << endl;
        _pl->drawLine();
    }

protected:
    int _ridus;
};

class Rect : public Shape
{
public:
    Rect(int x = 0, int y = 0, int len = 0, int width = 0, Line *pl = nullptr) : Shape(x, y, pl), _len(len), _width(width) {}
    void drawShape()
    {
        cout << "draw from (" << _x << ", " << _y << ") len: " << _len << " width: " << _width << endl;
        _pl->drawLine();
    }

protected:
    int _len, _width;
};

int main()
{

    DotLine dl;
    Circle c(1, 2, 3, &dl);
    c.drawShape();

    SolidLine sl;
    Rect r(1, 2, 3, 4, &sl);
    r.drawShape();
    return 0;
}