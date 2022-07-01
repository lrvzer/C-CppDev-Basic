#include <stdio.h>

int main(int argc, char *argv[]) {
    /* 以下是死循环 */
//Target:
//	printf("goto\n");
//	goto Target;

    if (0)
        goto Target;
    else
        printf("print");

    Target:printf("hello, world");
    return 0;
}