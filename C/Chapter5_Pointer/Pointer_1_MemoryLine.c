#include <stdio.h>

// 一维数组的逻辑和存储是一致的，均是线性的
// 二维数组的逻辑是二维的，但其存储是线性的

// 存储是线性的原因死因为内存物理特性决定的

int main(int argc, char *argv[]) {
    int a[3];
    int arr[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%p\n", &arr[i][j]);
        }
        putchar(10);
    }
    return 0;
}