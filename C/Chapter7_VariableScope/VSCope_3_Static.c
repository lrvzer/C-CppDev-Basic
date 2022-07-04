#include <stdio.h>

// static 修饰局部变量，默认初始化为0
// auto   修饰局部变量，存储在栈上，随用随开，用完即消
// static 修饰局部变量，data，生命周期等同于进程、main函数
// static 变量的初始化，只执行一次

// 全局变量会带来命名污染，全局可用，避免传参
// 一个全局变量，天然的拥有外延性，可以被其他的文件所引用，extern
// static修饰全局变量后，外延性小时，变成文本内部的全局变量
int mm;

void func() {
    int a = 1;
    printf("a = %d\t", a);

    static int b = 1;
    printf("b = %d\n", b++);

    printf("=============\n");
}

int main(int argc, char *argv[]) {
    for (int i = 0; i < 10; i++) {
        func();
    }
    return 0;
}