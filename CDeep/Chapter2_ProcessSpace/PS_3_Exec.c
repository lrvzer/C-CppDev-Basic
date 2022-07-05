#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *fa() {
    char *pa = "123456";
    // pa指针在栈区，"123456”在常量区，该函数调用完后指针变量pa就被释放了
    char *p = NULL;
    // 指针变量 p 在栈中分配4字节
    p = (char *) malloc(100);
    // 本函数在这里开辟了一块堆区的内存空间，并把地址赋值给p
    strcpy(p, "wudunxiong 1234566");
    // 把常量区的字符串拷贝到堆区
    return p;
    // 返回给主调函数fb()，相对fa来说fb是主调函数，相对main来说，
    // fa(),fb()都是被调用函数
}

char *fb() {
    char *pstr = NULL;
    pstr = fa();
    return pstr;//指针变量pstr在这就结束
}

int main(int argc, char *argv[]) {
    char *str = NULL;
    str = fb();
    printf("str = %s\n", str);
    free(str);
    // 防止内存泄露，被调函数fa()分配的内存存的值通过返回值传给主调函数，
    // 然后主调函数释放内存
    str = NULL; //防止产生野指针
    return 0;
}