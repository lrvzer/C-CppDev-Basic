#include <stdio.h>

#define M 5
#define N 3

int main(int argc, char *argv[]) {
    int A[M] = {1, 3, 5, 7, 9};
    int B[N] = {2, 4, 6};
    int merge[M + N];

    int aStart = 0, bStart = 0, mergeStart = 0;

    // 必然有一个数组会被遍历完全
    while (aStart < M && bStart < N) {
        if (A[aStart] <= B[bStart]) {
            merge[mergeStart++] = A[aStart++];
        } else {
            merge[mergeStart++] = B[bStart++];
        }
    }

    // 遍历没有遍历完全的数组
    while (aStart < M) {
        merge[mergeStart++] = A[aStart++];
    }

    while (aStart < N) {
        merge[mergeStart++] = B[bStart++];
    }

    for (int i = 0; i < M + N; i++) {
        printf("%d\t", merge[i]);
    }

    putchar(10);
    return 0;
}