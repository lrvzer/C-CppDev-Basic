#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

void initArr(int *arr, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        *arr++ = rand() % 100;
    }
}

void display(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%2d\t", *arr++);
    }
    putchar(10);
}

void selectSort(int *arr, int n) {
    int idx;
    for (int i = 0; i < n - 1; i++) {
        idx = i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + idx)) {
                idx = j;
            }
        }

        if (idx != i) {
            arr[i] ^= arr[idx];
            arr[idx] ^= arr[i];
            arr[i] ^= arr[idx];

        }
    }
}

int main(int argc, char *argv[]) {
    int arr[N];
    initArr(arr, N);
    display(arr, N);
    selectSort(arr, N);
    display(arr, N);
    return 0;
}