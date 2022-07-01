#include <stdio.h>

/**
 * % 求余运算符，要求必须是整数
 */
int main()
{
    int a = 10;
    int b = 3;

    printf("%f\n", (float) a/b);
    printf("a+++b = %d, a = %d, b = %d\n", a+++b, a, b);

    printf("-7/3 = %d\n", -7/3);
    printf("-7%%3 = %d\n", -7%3);

    // 10以内的偶数
    for (int i = 0; i < 10; i++)
    {
        if (i%2 == 0) {
            printf("i = %d\n", i);
        }
    }
    putchar(10);

    return 0;
}