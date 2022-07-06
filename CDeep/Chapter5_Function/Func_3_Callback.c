#include <stdio.h>

int compare(int a, int b) {
    return a > b ? 1 : 0;
}

void selectSort(int *p, int n, int (*pf)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pf(p[i], p[j])) {
                p[i] = p[i] ^ p[j];
                p[j] = p[i] ^ p[j];
                p[i] = p[i] ^ p[j];
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int arr[10] = {6, 5, 4, 3, 2, 1, 7, 8, 9, 0};
    selectSort(arr, 10, compare);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}