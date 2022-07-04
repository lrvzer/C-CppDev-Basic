#include <stdio.h>

/**
 * extern
 * 修饰全局变量
 */
extern int a;

int main(int argc, char *argv[]) {
    printf("%d\n", a);
    return 0;
}