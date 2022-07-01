#include <stdio.h>

/**
 * 浮点数有效位
 * float    6-7
 * double   15-16
 */
int main() {
    float fvar = 0.1234567654321f;
    printf("fvar = %.13f\n", fvar);

    double dvar = 0.1234567654321;
    printf("dvar = %.13f\n", dvar);
    return 0;
}