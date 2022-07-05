#include <stdio.h>

#if 0
a + b = -99
a + b = 4294967197
#endif

// 隐式类型转化
int main(int argc, char *argv[]) {
    unsigned int a = 1;
    int b = -100;
    printf("a + b = %d\n", a + b);
    printf("a + b = %u\n", a + b);

    if (a + b > a) {
        printf("xxxxxxx");
    } else {
        printf("ooooooo");
    }
    return 0;
}