#include <stdio.h>

// 数组名二义性
// 数组名作整体访问，作起始地址访问成员

// 作参数传递
void foo(int *arr, int n) {
    printf("sizeof(arr) = %lu\n", sizeof(arr));
}

int main(int argc, char *argv[]) {
    int arr[4] = {11, 22, 33, 44};
    printf("sizeof(arr)    = %lu\n", sizeof(arr));
    printf("sizeof(int[4]) = %lu\n", sizeof(int[4]));

    printf("arr     = %p; arr + 1     = %p\n", arr, arr + 1);
    printf("&arr[0] = %p; &arr[0] + 1 = %p\n", &arr[0], &arr[0] + 1);

    // arr[n] == *(arr + n)
    printf("%d\n", arr[1]);
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(1 + arr));
    printf("%d\n", 1[arr]);

    foo(arr, 4);

    // 一维数组取地址，数组指针
    int (*pa)[4] = &arr;
    printf("pa   = %p; pa + 1 = %p \n", pa, pa + 1);

    return 0;
}