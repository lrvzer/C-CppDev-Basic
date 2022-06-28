#include <stdio.h>

// 打印主对角线和副对角线
int main(int argc, char *argv[]) {
    int arr[4][4] = {
        1, 1, 1, 4,
        2, 2, 3, 2,
        3, 2, 3, 3,
        1, 4, 4, 4
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j || i + j == 3) {
                printf("%d\t", arr[i][j]);
            } else {
                printf("*\t");
            }
        }
        putchar(10);
    }
    return 0;
}