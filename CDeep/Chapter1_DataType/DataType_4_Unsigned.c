#include <stdio.h>

#if 0
a + b = -99
a + b = 4294967197
#endif

// 隐式类型转化
// unsigned int + int 会先把 int 转为 unsigned int
int main(int argc, char *argv[]) {
    unsigned int a = 1;
    int b = -100;

    printf("%d, %u\n", a, a);
    printf("%d, %u\n", b, b);

    printf("a + b = %d\n", a + b);
    printf("a + b = %u\n", a + b);

    if (a + b > a) {
        printf("xxxxxxx");
    } else {
        printf("ooooooo");
    }
    return 0;
}