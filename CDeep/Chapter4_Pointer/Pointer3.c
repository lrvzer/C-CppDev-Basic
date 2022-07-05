#include <stdio.h>

struct Staff {
    char name[1024];
    int age;
};

int main(int argc, char *argv[]) {
#if 0
    char *p = 0;
    char **pp = &p;

    printf("p  = %p p+1  = %p\n", p, p+1);
    printf("pp = %p pp+1 = %p\n", pp, pp+1);
#endif

#if 0
    short *p = 0;
    short **pp = &p;

    printf("p  = %p p+1  = %p\n", p, p+1);
    printf("pp = %p pp+1 = %p\n", pp, pp+1);
#endif

#if 0
    int *p = 0;
    int **pp = &p;

    printf("p  = %p p+1  = %p\n", p, p+1);
    printf("pp = %p pp+1 = %p\n", pp, pp+1);
#endif
    struct Staff *p;
    struct Staff **pp = &p;
    struct Staff ***ppp = &pp;
    printf("p   = %p p+1   = %p\n", p, p + 1);
    printf("pp  = %p pp+1  = %p\n", pp, pp + 1);
    printf("ppp = %p ppp+1 = %p\n", ppp, ppp + 1);
    return 0;
}