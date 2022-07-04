#include <stdio.h>

typedef struct _complex {
	float real;
	float image;
} Complex;

// 复数相加
//Complex addComplex(Complex c1, Complex c2) {
//    Complex ret;
//    ret.real = c1.real + c2.real;
//    ret.image = c1.image + c2.image;
//    return ret;
//}

Complex addComplex(Complex *c1, Complex *c2) {
    Complex ret;
    ret.real = c1->real + c2->real;
    ret.image = c1->image + c2->image;
    return ret;
}

int main(int argc, char *argv[]) {
	Complex c1 = {1, 2}, c2 = {3, 4};
	Complex ret = addComplex(&c1, &c2);
	printf("ret = {real = %f, image = %f}\n", ret.real, ret.image);
	return 0;
}