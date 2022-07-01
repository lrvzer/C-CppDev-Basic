#include    <iostream>

using namespace std;

class A {
    public:
        void print(int x, int y) {
            cout << "x:" << x << endl;
            cout << "y:" << y << endl;
        }
};

int main() {
    A a;
    A *b;
    function<void(int, int)> pf1 = bind(&A::print, a, placeholders::_1, placeholders::_2);
    pf1(1, 3);

    void (A::*pp)(int, int) = &A::print;
    (a.*pp)(11, 22);
    (b->*pp)(33, 44);

    function<void(int, int)> pf2 = bind(pp, a, placeholders::_1, placeholders::_2);
    pf2(100,200);

}