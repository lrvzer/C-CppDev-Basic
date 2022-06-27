#include<stdio.h>

// && 将两侧操作数逻辑化，0位假，非0为真
// ||
// !
// 短路
int main(void) {
    int a = 44, b = 55;
    if ((a > 40) || (b = 66)) {
        printf("xxxxb = %d", b);
    } else {
        printf("oooob = %d", b);
    }
}

int main1(void) {
    if (!5) {
        printf("00");
    } else {
        printf("5");
    }
    for (int i = 0; i < 10; i++) {
        if (!(i % 3)) {
            printf("i = %d\n", i);
        }
    }
    return 0;
}

int main0(void) {
    int a = 3, b = 5;
    if (a >= 5 && a < 100) {
        printf("xxxx\n");
    } else {
        printf("oooo\n");
    }
    return 0;
}