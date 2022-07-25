#include <iostream>

using namespace std;

class MyComplexEC {
    public:
        MyComplexEC(int r = 0, int i = 0);
        MyComplexEC operator+(const MyComplexEC &another);
        void dis() {
            cout << "(" << this->_real << ", " << this->_img << ")";
        }
    private:
        int _real, _img;
};

MyComplexEC::MyComplexEC(int r, int i) : _real(r), _img(i) {}

MyComplexEC MyComplexEC::operator+(const MyComplexEC &another) {
    MyComplexEC tmp;
    tmp._img = this->_img + another._img;
    tmp._real = this->_real + another._real;
    return tmp;
}

int main() {
    MyComplexEC m1(10, 11);
    MyComplexEC m2(11, 12);
    m1 = m1 + m2;
    m1.dis();
    return 0;
}