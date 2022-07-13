#include "MyString.h"
#include <cstring>
#include <iostream>

MyString::MyString(const char *src) {
    if (nullptr == src) {
        _str = new char[1];
        _str[0] = '\0';
//        *_str = '\0';
    } else {
        _str = new char[strlen(src) + 1];
        strcpy(_str, src);
    }
}

MyString::MyString(const MyString &another) {
    _str = new char[strlen(another._str) + 1];
    strcpy(_str, another._str);
}

MyString &MyString::operator=(const MyString &another) {
    if (this != &another) {
        delete[] this->_str;
        _str = new char[strlen(another._str) + 1];
        strcpy(_str, another._str);
    }
    return *this;
}

MyString::~MyString() {
    delete[] _str;
}

void MyString::dis() {
    std::cout << _str << std::endl;
}