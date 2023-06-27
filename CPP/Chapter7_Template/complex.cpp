#include "complex.h"

template<typename T>
complex<T>::complex() :re(0), im(0) {}

template<typename T>
complex<T>::complex(T r, T i):re(r), im(i) {}

template<typename T>
inline complex<T> &complex<T>::operator+=(const complex<T> &another) {
    return __doapl(this, another);
}

template<typename T>
inline complex<T> complex<T>::operator+(const complex<T> &another) {
    return complex<T>(this->re + another.re, this->im + another.im); // 临时对象 typename()
}

template<typename T>
inline complex<T> &__doapl(complex<T> *ths, const complex<T> &r) {
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const complex<T> &another) {
    return os << "(" << another.re << ", " << another.im << ")";
}