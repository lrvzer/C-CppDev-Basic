#include <stdio.h>

void mySwap(int *pa, int *pb) {
	*pa ^= *pb;
	*pb ^= *pa;
	*pa ^= *pb;
}


// 每次从头开始，相邻两元素进行交换

void popSort(int *p,  int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			// 数值大的往下沉
			if (p[j] > p[j+1]) {
				mySwap(&p[j], &p[j+1]);
			}
		}
	}
}

//序而不排
void popSortPro(int *p,  int n) {
	int flag;
	for (int i = 0; i < n - 1; i++) {
		flag = 1;
		for (int j = 0; j < n - i - 1; j++) {
			if (p[j] > p[j+1]) {
				mySwap(&p[j], &p[j+1]);
				flag = 0;
			}
		}
		
		if (flag) {
			break;
		}
	}
}

int main(int argc, char *argv[]) {
	int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	popSort(arr, 10);
//	popSortPro(arr, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}