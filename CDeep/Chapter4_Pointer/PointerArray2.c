#include <stdio.h>

// main1
// 访问数组时，可以通过下标访问（偏移）
// 指针访问数组

// main
// 指针数组本质是一个数组
// 想要用指针访问指针数组

int main(int argc, char *argv[]) {
	char* pa[] = {"Google", "Oracle", "Facebool", "Apple", "NZ"};
	
//	for (int i = 0; i < sizeof(pa) / sizeof(char*); i++) {
//		printf("%s\n", pa[i]);
//	}
	
	char **p = pa; // &pa[0] -> &char* -> char**
	
	for (int i = 0; i < sizeof(pa) / sizeof(char*); i++) {
		printf("%s\n", p[i]);
	}
	return 0;
}

int main1(int argc, char* argv[]) {
	int arr[10] = {1, 2, 3};
	int *p = arr;
	// &arr[0] -> &int -> int * 
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", *p++);
	}
	
	return 0;
}