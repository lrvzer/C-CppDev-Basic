#include <stdio.h>

int main() {
    int a = 2, b = 3;
    a *= b + 4; // a = a * (b + 4)
    printf("a = %d", a);
    return 0;
}


/*运算符：优先级、结合性、分目*/
int main0() {
    int a, b, c, d, e;
    a = b = c = d = e = 5;
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);

    // 任何表达式都是有值的
    c = (a = b) + (b = c);
    printf("c = %d\n", c);

    a++; /*单目运算符*/
    a + b; /*双目运算符*/
    a > b ? c : d; /*三目运算符*/
    return 0;
}