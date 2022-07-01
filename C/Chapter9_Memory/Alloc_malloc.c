#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 申请和初始化的最小单位都是字节

int main(int argc, char *argv[]) {
	
	// 基本数据类型在栈和堆上
	int a; a = 100; // 栈
	printf("a = %d\n", a);
	
	int * p = (int *) malloc (sizeof(int) * 1); // p指向堆上的内存，例如0x121212
	*p = 100; // 堆上内存0x121212，赋值为100
	printf("*p = %d\n", *p);
	
	
	// 数组类型在栈和堆上
	int arr[10];
	
	// 申请堆上内存
	int *pa = (int *) malloc(10 * sizeof(int));
	int *pacopy = pa;
	
	memset(pa, 0, 10 * sizeof(int)); // 每个字节初始化为0
	
	for (int i = 0; i < 10; i++) {
//		printf("%d\n", pa[i]);
//		printf("%d\n", pa++); // pa++ free(pa)时，pa偏移，找不到释放的pa
		printf("%d\n", *pacopy++);
		
	}
	
	free(pa);
	return 0;
}