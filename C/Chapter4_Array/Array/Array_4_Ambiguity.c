#include <stdio.h>

// 数组名的二义性
// 数组名是数组的唯一标识符
// 数组名，充当一种构造类型，充当访问数据成员的首地址

int main(int argc, char *argv[]) {
    int arr[10] = {2};

    printf("sizeof(arr) = %lu\n", sizeof(arr));
    printf("sizeof(int[10]) = %lu\n", sizeof(int[10]));

    printf("arr = %p     \t arr + 1= %p\n", arr, arr + 1);
    printf("&arr[0] = %p \t &arr[0] + 1 = %p\n", &arr[0], &arr[0] + 1);
    printf("arr[0] = %d\n", *(arr + 0));
}