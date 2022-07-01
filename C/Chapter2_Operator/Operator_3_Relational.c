#include <stdio.h>

int main() {
    int a = 10;
    int b = 1;

    if (a == b) {
        printf("a == b\n");
    } else {
        printf("a != b\n");
    }

    printf("express a == b value = %d\n", a == b);
    printf("express a != b value = %d\n", a != b);

    b = 0;
    if (a = b) {
        printf("a");
    } else {
        printf("b");
    }
    return 0;
}