#include <stdio.h>

int main(int argc, char *argv[]) {
	int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", arr[i][j]);
		}
		putchar(10);
	}
	
	int * p = (int *) arr;
	for (int i = 0; i < 12; i++) {
		printf("%d\n", p[i]);
	}
	return 0;
}