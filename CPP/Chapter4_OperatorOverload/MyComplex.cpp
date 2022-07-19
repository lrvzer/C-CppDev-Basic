#include "MyComplex.h"

MyComplex::MyComplex(int r, int i) : _real(r), _img(i) {}

MyComplex MyComplex::operator+(const MyComplex &another) {
    MyComplex tmp;
    tmp._img = this->_img + another._img;
    tmp._real = this->_real + another._real;
    return tmp;
}

MyComplex &MyComplex::operator+=(const MyComplex &another) {
    this->_real += another._real;
    this->_img += another._img;
    return *this;
}

MyComplex MyComplex::operator-() {
    return MyComplex(-this->_real, -this->_img);
}

MyComplex MyComplex::operator-(const MyComplex &another) {
    MyComplex tmp;
    tmp._img = this->_img - another._img;
    tmp._real = this->_real - another._real;
    return tmp;
}

MyComplex MyComplex::operator-=(const MyComplex &another) {
    return operator-(another);
}

MyComplex &MyComplex::operator++(void) {
    this->_real++;
    this->_img++;
    return *this;
}
const MyComplex MyComplex::operator++(int) {
    MyComplex c(*this);
    this->_img++;
    this->_real++;
    return c;
}

std::ostream &operator<<(std::ostream &ostream, MyComplex &complex) {
    ostream << "(" << complex._real << ", " << complex._img << ")" << std::endl;
    return ostream;
}

std::istream &operator>>(std::istream &istream, MyComplex &complex) {
    istream >> complex._real >> complex._img;
    return istream;
}