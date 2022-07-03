#include <stdio.h>

// define NULL ((void *)0)
int main(int argc, char *argv[]) {

    // 初始化
    int *pa = NULL; //#define NULL ((void *) 0)

    if (pa != NULL) {
        *pa = 100;
    }

    printf("sizeof(char) = %lu\n", sizeof(char));
    printf("sizeof(void) = %lu\n", sizeof(void));
    return 0;
}

int main0(int argc, char *argv[]) {

    // 野指针
    int *pa;

    *pa = 100; // 不可赋值
    printf("%#x\n", pa);

    return 0;
}