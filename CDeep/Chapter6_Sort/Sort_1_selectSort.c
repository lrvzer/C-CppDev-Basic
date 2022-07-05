#include <stdio.h>

void mySwap(int *pa, int *pb) {
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

void selectSort(int *p, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i] > p[j]) {
                mySwap(&p[i], &p[j]);
            }
        }
    }
}

/** 
 * 优化
 * 比而不换，只记下表
 */
void selectSortPro(int *p, int n) {
    // 用idx记录最小值的下表
    int idx;
    for (int i = 0; i < n - 1; i++) {
        idx = i;
        for (int j = i + 1; j < n; j++) {
            if (p[idx] > p[j]) {
                idx = j;
            }
        }

        if (idx != i) {
            mySwap(&p[i], &p[idx]);
        }
    }
}

int main(int argc, char *argv[]) {
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    selectSort(arr, 10);
//	selectSortPro(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}