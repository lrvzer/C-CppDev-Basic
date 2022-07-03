#include <stdio.h>

// 声明一个指针变量，必须保存两种东西，一个地址数据，二是类型

// type * pointerName
//   *    表明了本变量为指针变量，侧重是大小，此处的*仅用于表示声明
// type   类型决定了该指针变量中存储的地址的寻址能力

int main(void) {
    int data = 0x12345678;

    int *pd = &data;

    printf("pd    = %p\n", pd);
    printf("&data = %p\n", &data);
    printf("&pd   = %p\n", &pd);

    printf("%#x\n", *pd);
    printf("%#x\n", *(short *) pd);
    printf("%#x\n", *(char *) pd);
}

int main0(int argc, char *argv[]) {

    char a = '1';
    short b = 2;
    int c = 3;
    float f = 4.5;
    double d = 5.6;

    printf("%lu\n", sizeof(char *)); // 8
    printf("%lu\n", sizeof(short *));
    printf("%lu\n", sizeof(int *));
    printf("%lu\n", sizeof(float *));
    printf("%lu\n", sizeof(double *));

    char *pa = &a;
    printf("%c\n", *pa);
    return 0;
}