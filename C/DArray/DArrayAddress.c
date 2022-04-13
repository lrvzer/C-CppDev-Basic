#include <stdio.h>




// 一维数组的数组名是一级指针
// 二维数组的数组名是数组指针
int main(int argc, char *argv[]) {
	int arr[3][4]; // int[4] arr[3]; T arr[3]

	printf("arr        = %p\n", arr);
	printf("arr + 1    = %p\n", arr + 1);
	
	printf("*arr       = %p\n", *arr);
	printf("*arr + 1   = %p\n", *arr + 1);
	
	printf("%d", *(*(arr + 1) + 0));
	
	return 0;
}

int main1(int argc, char *argv[])
{
	// 二维
	int arr[3][4]; // int[4] arr[3]; T arr[3]
	
	// 二维数组起始地址
	printf("arr        = %p\n", arr);
	printf("&arr[0]    = %p\n", &arr[0]);
	
	// 	步长
	printf("arr        = %p\n", arr);
	printf("arr + 1    = %p\n", arr + 1);
	
	// 内嵌一维数组起始地址
	printf("arr[0]     = %p\n", arr[0]);
	printf("&arr[0][0] = %p\n", &arr[0][0]);

	// 内嵌一维数组步长
	printf("arr[0]     = %p\n", arr[0]);
	printf("arr[0] + 1 = %p\n", arr[0] + 1);
	
	return 0;
}


int main0(int argc, char *argv[])
{
	// 一维
	int arr[4];
	
	// 起始地址
	printf("arr     = %p\n", arr);
	printf("&arr[0] = %p\n", &arr[0]);
	
	// 步长
	printf("arr     = %p\n", arr);
	printf("arr + 1 = %p\n", arr + 1);
	
	return 0;
}