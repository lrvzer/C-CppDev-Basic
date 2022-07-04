#include <stdio.h>

// argc 参数个数
// argv 指针数组

int main(int argc, char *argv[]) {
//    for (int i = 0; i < argc; i++) {
//        printf("argv[%d] = %s\n", i, argv[i]);
//    }

    char **p = argv;
    while (*p) {
        printf("%s\n", *p++);
    }

}