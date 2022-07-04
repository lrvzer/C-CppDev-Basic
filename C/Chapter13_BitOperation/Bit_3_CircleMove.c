#include <stdio.h>

void displayBinary(int data) {
    int i = 32;
    while (i--) {
        if (data & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }

        if (i % 4 == 0) {
            if (i % 8 == 0)
                printf(" ");
            else
                printf("-");
        }
    }
    putchar(10);
}

// unsigned：避免了右移补1的问题
void circleMove(unsigned int *pa, int n) {

    n %= (sizeof(*pa) * 8);

    if (n > 0) {
        // 左移逻辑
        *pa = (*pa << n) | (*pa >> (sizeof(*pa) * 8 - n));
    } else {
        // 右移逻辑
        *pa = (*pa >> (-n)) | (*pa << (sizeof(*pa) * 8 - (-n)));
    }
}

int main(int argc, char *argv[]) {

    int a = 0x80000001;
    displayBinary(a);
    circleMove(&a, 1);
    displayBinary(a);
    return 0;
}