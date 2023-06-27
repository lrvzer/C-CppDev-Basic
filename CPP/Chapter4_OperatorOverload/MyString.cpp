#include "MyString.h"

inline MyString::MyString(const char *src) {
    if (nullptr == src) { // 未指定初值
        _str = new char[1];
        _str[0] = '\0'; // *_str = '\0';
    } else {
        _str = new char[my_strlen(src) + 1];
        my_strcpy(_str, src);
    }
}

inline MyString::MyString(const MyString &another) {
    _str = new char[my_strlen(another._str) + 1];
    my_strcpy(_str, another._str);
}

inline MyString &MyString::operator=(const MyString &another) {
    if (this != &another) {
        delete[] this->_str; //
        _str = new char[my_strlen(another._str) + 1];
        my_strcpy(_str, another._str);
    }
    return *this;
}

bool MyString::operator==(const MyString &another) {
    return my_strcmp(this->_str, another._str) == 0;
}

bool MyString::operator!=(const MyString &another) {
    return my_strcmp(this->_str, another._str) != 0;
}

bool MyString::operator>(const MyString &another) {
    return my_strcmp(this->_str, another._str) > 0;
}

bool MyString::operator<(const MyString &another) {
    return my_strcmp(this->_str, another._str) < 0;
}

bool MyString::operator>=(const MyString &another) {
    return !operator<(another);
}

bool MyString::operator<=(const MyString &another) {
    return !operator>(another);
}

MyString MyString::operator+(const MyString &another) {
    // 初始化并删除原有空间（拼接空间大于原有空间）
    MyString ms;
    delete[] ms._str;
    // 申请空间
    int len = my_strlen(this->_str) + my_strlen(another._str) + 1;
    ms._str = new char[len];
    //  拼接
    my_strcat(my_strcat(ms._str, this->_str), another._str);
    return ms;
}

MyString &MyString::operator+=(const MyString &another) {
    int catLen = my_strlen(this->_str);
    int srcLen = my_strlen(another._str);
    int len = catLen + srcLen + 1;
    // 扩容
    this->_str = static_cast<char *>(realloc(this->_str, len * sizeof(char)));
    memset(this->_str + catLen, 0, srcLen + 1);
    my_strcat(this->_str, another._str);
    return *this;
}

char &MyString::operator[](int idx) {
    return *(_str + idx);
}

char MyString::at(int idx) {
    return *(_str + idx);
}

const char *MyString::c_str() {
    return _str;
}

inline MyString::~MyString() {
    delete[] _str;
}

ostream &operator<<(ostream &os, const MyString &out_str) {
    os << out_str._str;
    return os;
}

istream &operator>>(istream &is, MyString &in_str) {
    char ch;
    unsigned int i = 0;
    unsigned int reLen = 1;
    unsigned int realLen = MyString::my_strlen(in_str._str);
    while (1) {
        is >> noskipws;//noskipws => no skip whitespace(空白)
        //noskipws 不是不忽略输入前的空格, 而是 不忽略 任意地方的空格
        is >> ch;
        if (ch == '\n') {
            break;
        } else {
            if (i + 1 > realLen) {
                reLen <<= 1;
                in_str._str = static_cast<char *> (realloc(in_str._str, reLen));
            }
            in_str._str[i] = ch;
            i++;
        }
    }
    in_str._str[i] = '\0';
    return is;
}

int MyString::my_strlen(const char *src) {
    int len = 0;
    while (*src) {
        len++;
        src++;
    }
    return len;
}

char *MyString::my_strcpy(char *dst, const char *src) {
    char *p = dst;
    while ((*dst++ = *src++));
    return p;
}

int MyString::my_strcmp(const char *s1, const char *s2) {
    for (; *s1 && *s2 && (*s1 == *s2); s1++, s2++);
    return *s1 - *s2;
}

char *MyString::my_strcat(char *dst, const char *src) {
    char *p = dst;
    while (*dst) dst++;
    while ((*dst++ = *src++));
    return p;
}