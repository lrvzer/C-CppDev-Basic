#include <iostream>
using namespace std;

struct Point {
    int add(int x, int y) {
        return x + y;
    }

    int minus(int x, int y) {
        return x - y;
    }

    int nul(int x, int y) {
        return x * y;
    }

    int div(int x, int y) {
        return x / y;
    }
};

int operation(Point &p, int (Point::*ps)(int x, int y), int x, int y) {
    return (p.*ps)(x, y);
}

typedef int (Point::*PF)(int x, int y);

int main() {
    Point p;
    PF pf = &Point::add;
    cout << operation(p, pf, 1, 2) << endl;
    return 0;
}
