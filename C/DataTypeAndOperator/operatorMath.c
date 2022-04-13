#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    printf("a+++b = %d, a = %d, b = %d", a+++b, a, b);
    return 0;
}

// % 求余运算符，要求必须是整数
int main0() {
    int a = 10;
    int b = 3;
    printf("%f\n", (float) a/b);

    printf("-7%%3 = %d", -7%3);

    for (int i = 0; i < 100; i++)
    {
        if (i%2 == 0) {
            printf("i = %d\n", i);
        }
    }
    putchar(10);


    return 0;
}