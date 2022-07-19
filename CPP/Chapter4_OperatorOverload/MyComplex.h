#ifndef __COMPLEX_H__
#define __COMPLEX_H__
#include <ostream>
#include <istream>

class MyComplex {
        friend std::ostream &operator<<(std::ostream &ostream, MyComplex &complex);
        friend std::istream &operator>>(std::istream &istream, MyComplex &complex);
    public:
        MyComplex(int r = 0, int i = 0);
        MyComplex operator+(const MyComplex &another);
        MyComplex &operator+=(const MyComplex &another);

        MyComplex operator-();
        MyComplex operator-(const MyComplex &another);
        MyComplex operator-=(const MyComplex &another);

        MyComplex &operator++(void);
        const MyComplex operator++(int);
    private:
        int _real, _img;

};
#endif
