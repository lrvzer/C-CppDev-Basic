#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 返回堆上一维空间

// 返回值返回(一级指针)
char *allowSpace(int n) {
    char *p = (char *) malloc(n);
    return p;
}

// 参数(二级指针)
int alloc1dSpace(char **p, int n) {
    *p = (char *) malloc(n);
    if (NULL == *p)
        return 0;
    return 1;
}

int main(int argc, char *argv[]) {
    char *p = NULL;
    int ret = alloc1dSpace(&p, 200);
    if (ret) {
        strcpy(p, "china");
        printf("%s\n", p);
        free(p);
        p = NULL;
    }
    return 0;
}