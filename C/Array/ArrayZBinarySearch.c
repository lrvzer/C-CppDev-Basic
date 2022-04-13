#include <stdio.h>

#define N (10)

// 二分查找：有序为前提

int main(int argc, char *argv[]) {
	int arr[N] = {-1, 0, 2, 3, 5, 6, 7, 8, 9, 100};
	
	int findData = 100;
	
	int left = 0, right = N-1;
	int mid, index = -1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == findData) {
			index = mid;
			break;
		} else if (arr[mid] > findData) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	
	if (index != -1) {
		printf("arr[%d] = %d\n", index, arr[index]);
	} else {
		printf("Data %d is not in array.", findData);
	}
	return 0;
}