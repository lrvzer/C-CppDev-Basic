#include <stdio.h>

/**
在什么情况下使用传值，在什么情况下使用传址？
改变数值，传址
*/
// 地址对于不同的作用域来说是开放的
void mySwap(int *, int *);

int main(int argc, char *argv[]) {

    int a = 3, b = 5;
    printf("a = %d b = %d\n", a, b);
    mySwap(&a, &b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}

void mySwap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}