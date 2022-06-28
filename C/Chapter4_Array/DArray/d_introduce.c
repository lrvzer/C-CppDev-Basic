#include <stdio.h>

// 声明/定义
int main(int argc, char *argv[]) {
    int arr[3][4]; // int[4] arr[3]; T arr[3]; arr[0] arr[1] arr[2]

    printf("sizeof(arr) = %lu\n", sizeof(arr)); // 3 * 4 * 4 = 48
    printf("sizeof(int[4][3]) = %lu\n", sizeof(int[4][3]));
    printf("sizeof(arr[0]) = %lu\n", sizeof(arr[0])); // 4 * 4 = 16
    return 0;
}