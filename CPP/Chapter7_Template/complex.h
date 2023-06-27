#ifndef __CPP_COMPLEX_H__
#define __CPP_COMPLEX_H__

#include <iostream>

template<typename T>
class complex {
    friend std::ostream &operator<<(std::ostream &, const complex<T> &);

public:
    complex();

    complex(T r, T i);

    complex<T> operator+(const complex<T> &);

    complex<T> &operator+=(const complex<T> &);

    T real() const { return re; }

    T imag() const { return im; }

private:
    // re 实部 im 虚部
    T re, im;

    friend complex<T> &__doapl(complex<T> *, const complex<T> &);

};


#endif
