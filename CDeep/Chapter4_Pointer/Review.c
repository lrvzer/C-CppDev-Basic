#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void foo(int *p) {
    *p = 400;
}

void func(char **ch) {
    *ch = (char *) malloc(100);
}

int main(int argc, char *argv[]) {
    int a;
    foo(&a);
    printf("a = %d\n", a);

    char *q;
    func(&q);
    strcpy(q, "china");
    printf("%s\n", q);
    return 0;
}