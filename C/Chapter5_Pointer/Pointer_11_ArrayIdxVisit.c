#include <stdio.h>

// 数组名是指针常量，方可唯一的表示一个数组；
// 数组名是数组的唯一标识符。

// 一维数组名，可以赋给一级指针

// 数组名能做的事情，指针就能做，数组名不能做的，指针也能干

int main(int argc, char *argv[]) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *pp = arr;

    // 数组访问 偏移法 本质法
    for (int i = 0; i < 10; i++) {
        printf("%d\t", *(pp + i));
    }
    putchar(10);

    // 数组访问 下标法
    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    putchar(10);

    printf("arr  =%p\n", arr);
    printf("arr+1=%p\n", arr + 1);

    // 在一定程度上 arr == &arr[0]
    printf("&arr[0]   =%p\n", &arr[0]);
    printf("&arr[0]+1 =%p\n", &arr[0] + 1);

    int *pa = &arr[0];
    int *pb = arr;

    return 0;
}