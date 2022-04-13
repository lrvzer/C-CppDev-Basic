#include <stdio.h>

// 数组名是数组的唯一标识符
// 数组名，充当一种构造类型，充当访问数据成员的首地址

int main(int argc, char *argv[]) {
	int arr[10] = {2};
	
	printf("sizeof(arr) = %lu\n", sizeof(arr));
	printf("sizeof(int[10]) = %lu\n", sizeof(int[10]));
	
	printf("arr = %p\n", arr);
	printf("arr = %p\n", &arr[0]);
	printf("arr[0] = %d\n", *(arr+0));
	
	/*
	 Log:
		sizeof(arr) = 40
		sizeof(int[10]) = 40
		arr = 0x3057858d0
		arr = 0x3057858d0
		arr[0] = 2
	 */
}