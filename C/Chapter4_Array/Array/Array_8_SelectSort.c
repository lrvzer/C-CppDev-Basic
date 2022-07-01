#include <stdio.h>

#define N (10)

// 选择排序
int main(int argc, char *argv[]) {
    int arr[N] = {100, 6, 8, 2, 0, -1, 3, 5, 7, 9};

    printf("Before sorted: \n");
    for (int i = 0; i < N; i++) {
        printf("%d\t", arr[i]);
    }
    putchar(10);

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
    }

    printf("After sorted: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    putchar('\n');
    return 0;
}