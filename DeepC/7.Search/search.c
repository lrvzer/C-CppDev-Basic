#include <stdio.h>

int linarSearch(int *p, int n, int find) {
	for (int i = 0; i < n; i++) {
		if (find == p[i])
			return i;
	}
	return -1;
}

// 非递归
int binarySearch(int *p, int low, int high, int find) {
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (find == p[mid])
			return mid;
		else if (find > p[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

// 递归
// 循环条件就是递归终止条件
int binarySearchRec(int *p, int low, int high, int find) {
	int mid;
	if (low <= high) {
		mid = (low + high) / 2;
		if (find == p[mid])
			return mid;
		else if (find > p[mid])
			return binarySearch(p, mid + 1, high, find);
		else
			return binarySearch(p, low, mid - 1, find);
	}
	return -1;
}

int main(int argc, char *argv[]) {
	int arr[10] = {1, 15, 23, 33, 45, 67, 87, 91, 100, 102};
	int idx = binarySearchRec(arr, 0, 9, 1);
	if (idx != -1)
		printf("your find idx = %d\n", idx);
	return 0;
}