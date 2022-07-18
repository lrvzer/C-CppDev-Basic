#include <iostream>

using namespace std;

// 声明为谁的友元，就可以通过谁的对象，访问谁的私有成员
// 声明为ostream的友元，ostream就可以通过Complex的对象，访问Complex的私有成员

class Complex {
        friend Complex operator+(Complex &c1, Complex &c2);
        friend ostream &operator<<(ostream &os, Complex c);
    public:
        Complex(int r = 0, int i = 0) : _real(r), _img(i) {}
        Complex operator+(const Complex &another);

    private:
        int _real, _img;
};

Complex operator+(Complex &c1, Complex &c2) {
    cout << "Complex operator+(Complex &c1, Complex &c2)" << endl;
    Complex tmp;
    tmp._real = c1._real + c2._real;
    tmp._img = c1._img + c2._img;
    return tmp;
}

Complex Complex::operator+(const Complex &another) {
    cout << "Complex Complex::operator+(const Complex &another)" << endl;
    Complex tmp;
    tmp._img = this->_img + another._img;
    tmp._real = this->_real + another._real;
    return tmp;
}

ostream &operator<<(ostream &os, Complex c) {
    os << c._real << " : " << c._img << endl;
    return os;
}

int main() {
    Complex c1 = {1, 2};
    Complex c2 = {3, 4};
    Complex c3 = c1 + c2;
    cout << c3;
    return 0;
}