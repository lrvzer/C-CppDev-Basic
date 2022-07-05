#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// main1 通过二级指针，实现了对数据空间的间接访问 **ppc
// main2 通过二级指针，改变了一级指针的指向问题

// main3 通过一级指针，可以改变0级的内容
// main4 通过二级指针，可以改变一级指针的指向问题
// 		 通过三级指针，可以改变二级指针的指向问题
// 		 通过n级指针，可以改变n-1级指针的指向问题

int alloc2dSpace(char **p, int n) {
    *p = (char *) malloc(n);
    if (NULL == *p)
        return 0;
    return 1;
}

int main(int argc, char *argv[]) {
    char *p = NULL;
    int ret = alloc2dSpace(&p, 200);
    if (ret) {
        strcpy(p, "china");
        printf("%s\n", p);
        free(p);
        p = NULL;
    }
    return 0;
}

void func(char **p) {
    *p = "america";
}

int main4(int argc, char *argv[]) {
    char *p = "china";
    func(&p);
    printf("%s\n", p);
    return 0;
}

void foo(int *a) {
    *a = 100;
}

int main3(int argc, char *argv[]) {
    int a;
    foo(&a);
    printf("%d\n", a);
    return 0;
}

int main2(int argc, char *argv[]) {
    char chm = 'm', chn = 'n';

    char *pc = &chm; // pc = &chm; 自实现，改变指向
    char **ppc = &pc;

    printf("%c\n", *pc);
    *ppc = &chn;
    printf("%c\n", *pc);

    return 0;
}

int main1(int argc, char *argv[]) {
    char ch = 'm';
    char *pc = &ch; // pc -> 'm'

    printf("*pc = %c\n", *pc);
    printf("&ch = %p\tpc = %p\n", &ch, pc);

    // char*(类型) *(指针)ppc
    char **ppc = &pc;
    printf("&pc = %p\tppc = %p\n", &pc, ppc);
    printf("&ch = %p\t*pc = %p\n", &ch, *ppc);
    printf("ch = %c\t**ppc = %c\n", ch, **ppc);

    return 0;
}