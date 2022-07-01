#include <stdio.h>

// 通过传值的方式达不到修改变量a内容的目的
void func(int* pa);

int main(int argc, char *argv[]) {
	int a = 10;
//	func(a);  // 10
	func(&a); // (int *) 0x0001
	
	printf("main a = %d\n", a);
	return 0;
}

void func(int* pa)
{
	(*pa)++;
	printf("func a = %d\n", *pa);
}