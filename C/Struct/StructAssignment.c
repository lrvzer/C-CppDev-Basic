#include <stdio.h>

// 结构体类型的变量相同，可以赋值， 不同类型不可以

typedef struct _complex {
	float real;
	float image;
} Complex;

typedef struct stu {
	char name[40];
	int num;
	char sex;
	float score;
} Student;

typedef struct Emp {
	char name[40];
	int num;
	char sex;
	float score;
} Employee;

// 复数相加
//Complex addComplex(Complex c1, Complex c2) {
//	Complex ret;
//	ret.real = c1.real + c2.real;
//	ret.image = c1.image + c2.image;
//	return ret;
//}

Complex addComplex(Complex* c1, Complex* c2) {
	Complex ret;
	ret.real = c1->real + c2->real;
	ret.image = c1->image + c2->image;
	return ret;
}

int main(int argc, char *argv[]) {
	Student s, s2 = {"wangwu", 1002, 'f', 90};
	s = s2;
	printf("name: %s\nnum: %d\nsex: %c\nscore: %.0f\n", s.name, s.num, s.sex, s.score);
	
	
	Complex c1 = {1, 2}, c2 = {3, 4};
	Complex ret = addComplex(&c1, &c2);
	printf("ret = {real = %f, image = %f}\n", ret.real, ret.image);
	return 0;
}