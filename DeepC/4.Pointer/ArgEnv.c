#include <stdio.h>

int main(int argc, char *argv[], char ** env) {
//	for (int i = 0; i < argc; i++) {
//		printf("%s\n", argv[i]);
//	}
	
//	while (*argv) {
//		printf("%s\n", *argv++);
//	}
//	
//	while (*env) {
//		printf("%s\n", *env++);
//	}
	
	
	int arr[100];
	printf("sizeof(arr) = %lu\n", sizeof(arr));
	printf("sizeof(&arr) = %lu\n", sizeof(&arr));
	
	printf("%p %p\n", arr, arr + 1);
	printf("%p %p\n", &arr, &arr + 1);
	return 0;
}