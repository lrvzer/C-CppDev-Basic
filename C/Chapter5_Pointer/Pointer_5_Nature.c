#include <stdio.h>

// &
// 除了char占一个字节，占一个地址
// 其他类型包含多个字节，也就是拥有多个地址
// 当我们对一个变量取地址的时候，拿到的是低位字节的地址

// 指针常量  -> 指针变量
// 对变量取地址，取出的地址就是一个指针，且为常量
// 常量指针不是一个单纯的地址，而是有类型的


/*
&a      (char *)   0x3063a791f
&b      (short *)  0x3063a791c
&c      (int *)    0x3063a7918
&d      (double *) 0x3063a7910

指针的本质：由类型(决定寻址能力)的地址(物理地址 32位机：0000 0000 -- ffff ffff)
*/
int main(void) {
    int a, b;;
    int *p = &a;
    printf("%p\n", p);

    *p = 100;
    printf("%d\n", a);

    p = &b;
    printf("%p\n", p);
    *p = 200;
    printf("%d\n", b);

    return 0;
}

int main1(void) {
//	int data = 305419896; // 0x12345678
    int data = 0x11223344;
    printf("%p\n", &data);
    printf("%p\n", (char *) &data);
    printf("%p\n", (short *) &data);
    printf("%p\n", (int *) &data);

    printf("%x\n", *(char *) &data); // 78
    printf("%x\n", *(short *) &data); // 5678
    printf("%x\n", *(int *) &data); // 12345678
}

int main0(int argc, char *argv[]) {

    char a = 1;
    short b = 2;
    int c = 10;
    double d = 123.45;

    printf("&a = %p  ", &a);
    printf("&b = %p  ", &b);
    printf("&c = %p  ", &c);
    printf("&d = %p  ", &d);

    printf("%d\n", *(&a));
    printf("%d\n", *(&b));
    printf("%d\n", *(&c));
    printf("%f\n", *(&d));

    printf("%d\n", *((char *) 0x3063a791f));
    printf("%d\n", *((short *) 0x3063a791c));
    printf("%d\n", *((int *) 0x3063a7918));
    printf("%f\n", *((double *) 0x3063a7910));

    return 0;
}