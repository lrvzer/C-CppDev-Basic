#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 数值是可以返回的
// 2 地址是可以返回的
// 3 栈上的空间不可以返回，原因是随用随开，用完即销
// 4 堆上的空间是可以返回的

char *getFormatMem(int size, char content) {

    char *p = (char *) malloc(sizeof(char) * size);
    if (NULL == p)
        exit(-1);
    memset(p, content, sizeof(char) * size - 1);
    p[sizeof(char) * size - 1] = '\0';
    return p;

}

int main() {
    char *p = getFormatMem(10, 'a');
    printf("%s\n", p);
    free(p);
    return 0;
}

#if 0
int func() {
    int a = 100;
    return a;
}

int * foo() {
    int a = 100;
    int *pa = &a;
    printf("&a = %p\n", &a);
    return pa;
}

int main(int argc, char *argv[]) {
    int a = func();
    printf("%d\n", a);

    int * pa = foo();
    printf("pa = %p\n", pa);

    return 0;
}
#endif