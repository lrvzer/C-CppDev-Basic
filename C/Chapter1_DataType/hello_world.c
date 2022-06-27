#include <stdio.h> /* C语言中所有的函数，要求先声明后使用 */

/**
 * 入门
 * @return
 */
int main() /* main函数：程序的入口，表示计算机从哪里开始执行此程序；有且只有一个 */
{
    printf("Hello World!\n");
    return 0;
}
/*

1. "main.c"从源文件到可执行文件，经历了什么？
Linux   --- main.c  a.out
Windows --- main.c  x.exe

gcc -E main.c -o main.i  预处理：宏、注释等
gcc -S main.i -o main.s  编译：编译为汇编文件
gcc -c main.s -o main.o  汇编：汇编为二进制机器指令
gcc    main.o -o main    链接：链接到所用的库

2. http://helloworldcollection.de/

3. 注释
*/

// 单行注释
/*
 * 多行注释1
 */
#if 0
多行注释2
#endif
