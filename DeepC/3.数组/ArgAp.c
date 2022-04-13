#include <stdio.h>

void foo(int (*p)[4], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", p[i][j]);
		}
		putchar(10);
	}
}

int main(int argc, char *argv[]) {
	
	int arr[3][4] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3}; // int[4] arr[3]
	
	int *p = (int *) arr;
	for (int i = 0; i < 12; i++) {
		printf("%d ", p[i]);
	}
	putchar(10);
	foo(arr, 3);
	
	return 0;
}