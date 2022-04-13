#include <stdio.h>

// 数组指针

int main(int argc, char *argv[]) {
	int arr[10]; // int[10] a;
	int (*ap)[4] = NULL; // int[4] *ap; // 数组指针
//	int* pa[4]; // 数组指针
	
	printf("sizeof(ap) = %lu\n", sizeof(ap));
	// 幅度
	printf("ap = %p ap+1 = %p\n", ap, ap + 1);
	
	// 取别名
	typedef int (*AP)[10];
	AP app;
	printf("sizeof(app) = %lu\n", sizeof(app));
	printf("app = %p ap+1 = %p\n", ap, ap+1);
	return 0;
}