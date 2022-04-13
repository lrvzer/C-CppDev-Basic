#include <stdio.h>

int main(int argc, char *argv[]) {
	int arr[4];
	printf("  arr = %p   arr+1 = %p\n", arr, arr+1);
	printf(" &arr = %p  &arr+1 = %p\n", &arr, &arr+1);
	printf("*&arr = %p *&arr+1 = %p\n", *&arr, *&arr+1);
	return 0;
}