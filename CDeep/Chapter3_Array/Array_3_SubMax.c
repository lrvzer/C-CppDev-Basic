#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * 前提：最大的比次最大的大
 * (1) 比最大的大，更新最大，更新次最大
 * (2) 比最大的小，比次最大的大，更新次最大
 * (3) 比最大的小，比次最大的小，不更新
 **/

int main(int argc, char *argv[]) {

    int arr[10] = {94, 94, 94, 77, 94, 65, 54, 94, 58, 71};
    int max = arr[0];
    int subMax = 1 << 31;

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            subMax = max;
            max = arr[i];
        } else if (arr[i] > subMax && arr[i] != max) {
            subMax = arr[i];
        }
    }

    printf("max = %d\tsubMax = %d\n", max, subMax);
    return 0;
}

int main1(int argc, char *argv[]) {

    int arr[10];

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    putchar(10);

    int max, subMax;

    arr[0] > arr[1] ? (max = arr[0], subMax = arr[1]) : (max = arr[1], subMax = arr[0]);

    for (int i = 2; i < 10; i++) {
        if (arr[i] > max) {
            subMax = max;
            max = arr[i];
        } else if (arr[i] > subMax && arr[i] != max) {
            subMax = arr[i];
        }
    }

    printf("max = %d\tsubMax = %d\n", max, subMax);

    return 0;
}