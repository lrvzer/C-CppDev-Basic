#include <stdio.h>

// 数组的传递不可能通过拷贝的方式来传递。
// C语音基于效率的原因，在传递时候，数组名仅充当地址使用

// 数组三要素：起始地址、步长、范围
// 数组名是一个指针包含了（起始地址、步长），但数组名里面没有包含范围
// 所以在传递一维数组的时候，要传数组名和范围

void displayArray(int arr[], int len);

int main(int argc, char *argv[])
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	printf("main sizeof(arr) = %lu\n", sizeof(arr));
	displayArray(arr, sizeof(arr)/sizeof(*arr));
	
	return 0;
}

void displayArray(int arr[], int len)
{
	printf("displayArray sizeof(arr) = %lu\n", sizeof(arr));
	for (int i = 0; i < len; i++) {
		printf("%d\t", arr[i]);
	}
}