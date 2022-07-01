#include <stdio.h>

/**
 */
int main() {
    int a, b, c;
    a = 5; // 表达式的值为  5
    a = b = 3;         /*a=(b=3)*/
    a = (b = 4) + (c = 3); /*b=4, c=3, a=?*/
    printf("a = %d\n", a);

    a = a + b; // 同a += b;

    a = 2, b = 3;
    a *= b + 4; // a = a * (b + 4)
    printf("a = %d", a);

    return 0;
}