#include <stdio.h>

// 定义和声明的关系
// 定义在前，调用在后
// 定义在后，调用在前，此时需要前向声明
// 函数有一个特点，先声明后使用

// 形参和实参
// 在函数调用的时候，输入的参数，通常叫做实参
// 在函数定义或是声明的时候的参数，通常叫做形参；声明中的形参可以省略

// 入参中，如果没有参数，可以使用void表示无入参，通常省略
// 如果没有返回值，即返回类型是void，void不可以省 / 若省略，系统默认返回int

// void func(void);
// void func();
// func();

// 声明
int customMaxFunction(int, int);

int main(int argc, char *argv[]) {
	int a = 3, b =5;
	
	int iMax = customMaxFunction(a, b);
	printf("max value = %d\n", iMax);
	
	return 0;
}

// 定义
int customMaxFunction(int a, int b) {
	return a > b ? a : b;
}