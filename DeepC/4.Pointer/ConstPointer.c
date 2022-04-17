#include <stdio.h>

// const 修饰变量，去掉类型见本质

// const int * const p = &a;   表示修饰的指向不可以改变，指向的内容也不可以改变
int main(int argc, char *argv[]) {
	int a = 100;
	const int * const p = &a;
	return 0;
}

// int * const p = &a; 表示修饰的指向不可以改变，但是指向的内容可以改变
int main2(int argc, char *argv[]) {
	int a = 100;
	int * const p = &a;
	*p = 200;
	
	printf("a = %d\n", a);
	return 0;
}

// *p是一个整体，const修饰它，内容不可改变
// const int *p1 = &a; 修饰的内容不可改变，可以改变的是指针本身的指向
// int const *p2 = &a;
int main1(int argc, char *argv[]) {
	int a = 100;
	const int * p1 = &a;
	int const * p2 = &a;
	
	int b = 200;
	p1 = &b;
	printf("%d\n", *p1);
	return 0;
}