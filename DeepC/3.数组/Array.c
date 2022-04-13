#include <stdio.h>

void foo(int * arr, int n) {
	printf("sizeof(arr) = %lu", sizeof(arr));
}

int main(int argc, char *argv[]) {
	int arr[4] = {11, 22, 33, 44};
	printf("sizeof(arr)    = %lu\n", sizeof(arr));
	printf("sizeof(int[4]) = %lu\n", sizeof(int[4]));
	
	printf("arr     = %p\n", arr);
//	printf("&arr    = %p\n", &arr);
	printf("&arr[0] = %p\n", &arr[0]);
	
	printf("arr + 1     = %p\n", arr + 1);
	printf("&arr[0] + 1 = %p\n", &arr[0] + 1);
	
	
	// arr[n] == *(arr + n)
	printf("%d\n", arr[1]);
	printf("%d\n", *(arr + 1));
	printf("%d\n", *(1 + arr));
	printf("%d\n", 1[arr]);
	
	foo(arr, 4);
	return 0;
}