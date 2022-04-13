#include <stdio.h>

// 数组名是数组的唯一标识符
// 数组名，充当一种构造类型，充当访问数据成员的首地址

int main(int argc, char *argv[]) {
	int arr[3][4] = {1, 2, 3};
	
	printf("sizeof(arr)       = %lu\n", sizeof(arr));
	printf("sizeof(int[4][3]) = %lu\n", sizeof(int[4][3]));
	
	printf("arr     = %p\n", arr);
	printf("&arr    = %p\n", &arr);
	printf("&arr[0] = %p\n", &arr[0]);
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", *(*(arr + i) + j));
		}
		putchar(10);
	}
	
	/*
	 Log:
		sizeof(arr)       = 48
		sizeof(int[4][3]) = 48
		arr     = 0x30d7b28c0
		&arr    = 0x30d7b28c0
		&arr[0] = 0x30d7b28c0
	 */
}