#include <stdio.h>

/* 一维转二维 */
int main(int argc, char *argv[]) {
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int (*p)[4] = (int (*)[4]) arr;

    int len = (int) sizeof(arr) / sizeof(int[4]);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 4; j++) {
//			printf("%d\t", p[i][j]);
            printf("%d\t", *(*(p + i) + j));
        }
        putchar(10);
    }

    return 0;
}