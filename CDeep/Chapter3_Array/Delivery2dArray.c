#include <stdio.h>

void foo(int (*p)[4], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", p[i][j]);
		}
		putchar(10);
	}
}

int main(int argc, char *argv[]) {
	int arr[3][4] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3}; // int[4] arr[3] == type arr[3]
	
	foo(arr, 3);  // int (*p)[4]
	return 0;
}