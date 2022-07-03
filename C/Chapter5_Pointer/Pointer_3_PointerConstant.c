#include <stdio.h>

// &
// 除了char占一个字节，占一个地址
// 其他类型包含多个字节，也就是拥有多个地址
// 当我们对一个变量取地址的时候，拿到的是低位字节的地址

// 指针常量  -> 指针变量
// 对变量取地址，取出的地址就是一个指针，且为常量
// 常量指针不是一个单纯的地址，而是有类型的
// 指针的本质，是一个有类型的地址，类型决定了，从这个地址开始的寻址能力

int main(int argc, char *argv[]) {

    int data = 0x12345678;

    printf("%p\n", &data);
    printf("%x\n", *(&data));

    printf("%x\n", *((char *) &data));
    printf("%x\n", *((short *) &data));
    printf("%x\n", *((int *) &data));
    return 0;
}