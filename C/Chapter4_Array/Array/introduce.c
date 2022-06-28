#include <stdio.h>

// 相同的数据类型进行构造，就成了数组
// 不同的数据类型进行构造，就成了结构体

// 研究数组
// 定义/声明、大小、初始化/赋值、访问

int main(int argc, char *argv[]) {
    int arr[10]; // int arr[10] --> int[10] arr;
    printf("sizeof(arr) = %lu\n", sizeof(arr)); // sizeof(arr) = 40
    printf("sizeof(int[10]) = %lu\n", sizeof(int[10])); // sizeof(int[10]) = 40
    return 0;
}