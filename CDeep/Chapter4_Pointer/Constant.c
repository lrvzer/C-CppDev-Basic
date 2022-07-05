#include <stdio.h>

// const  constant 取代宏常量
// const 修饰的变量务必要初始化
// 宏的特点：替换


int main(int argc, char *argv[]) {
	const int a = 100;
	
	int *p = (int *)&a;
	*p = 300;
	printf("%d\n", a);
	printf("%d\n", *p);
	return 0;
}