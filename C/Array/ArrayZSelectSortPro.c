#include <stdio.h>

#define N (10)

// 选择排序
// 比较必不可少，交换可以减少
int main(int argc, char *argv[]) {
	int arr[N] = {100, 6, 8, 2, 0, -1, 3, 5, 7, 9};
	
	printf("Before sorted: \n");
	for (int i = 0; i < N; i++) {
		printf("%d\t", arr[i]);
	}
	putchar(10);
	
	for (int i = 0; i < 9; i++) {
		int idx = i;
		for (int j = i + 1; j < 10; j++) {
			if (arr[idx] > arr[j]) {
				idx = j;
			}
		}
		
		if (idx != i) {
			arr[i] ^= arr[idx];
			arr[idx] ^= arr[i];
			arr[i] ^= arr[idx];
		}
	}
	
	printf("After sorted: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
	putchar('\n');
	return 0;
}