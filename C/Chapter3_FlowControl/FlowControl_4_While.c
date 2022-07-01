#include <stdio.h>

/* 使用while循环实现九九乘法表*/
int main(int argc, char *argv[]) {

    int i = 1, j;
    while (i <= 9) {
        j = 1;
        while (j <= i) {
            printf("%d * %d = %d\t", j, i, i * j);
            j++;
        }
        i++;
        putchar(10);
    }

    return 0;
}