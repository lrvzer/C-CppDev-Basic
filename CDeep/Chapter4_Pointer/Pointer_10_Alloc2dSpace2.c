#include <stdio.h>
#include <stdlib.h>

void **alloc2DSpace(int unitSize, int row, int line) {
    // 产生指针数组
    void **p = malloc(sizeof(void *) * row);
    for (int i = 0; i < row; i++) {
        p[i] = malloc(unitSize * line);
    }
    return p;
}

int main(int argc, char *argv[]) {
    int **p = (int **) alloc2DSpace(sizeof(int), 3, 5);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            p[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", *(*(p + i) + j));
        }
        putchar(10);
    }
    return 0;
}