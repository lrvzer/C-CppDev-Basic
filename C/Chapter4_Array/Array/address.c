#include <stdio.h>

// 下表从零开始：是从基址处偏移0个单位处存储的第一个元素

int main(int argc, char *argv[]) {
    // 数组名具有二义性
    // arr 表示构造不类型；代表首元素的地址
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printf("arr = %d\n", *arr);
    printf("arr = %p arr + 1 = %p\n", arr, arr + 1);
    printf("&arr = %p &arr + 1 = %p\n", &arr, &arr + 1); // int (*p)[]
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    // [] 下表运算符；基址变址运算符
    // arr[1] 相当于 *(arr+1)
    // 1[arr] 相当于 *(1+arr)
    printf("arr[1] = %d, 1[arr] = %d\n", arr[1], 1[arr]);

    return 0;
}