#include <stdio.h>

// * 运算符重载，由语境决定运算符的属性

int main(int argc, char *argv[]) {
    int data = 10;
    printf("%p\n", &data); // 0x30aa0c924
    int *ptr_var = &data; // 用于声明变量
    *ptr_var = 100;        // 解引用 取内容

    printf("%p\n", ptr_var); // 0x30aa0c924
    printf("%p\n", &ptr_var); // 0x30aa0c918
    printf("%d\n", *ptr_var); // 100
    /*
     ptr_var	指针变量
     &ptr_var	指针变量的地址
     *ptr_var	取地址里面的内容
    */
    return 0;
}