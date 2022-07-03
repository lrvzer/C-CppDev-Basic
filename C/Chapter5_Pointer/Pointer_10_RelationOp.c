#include <stdio.h>

int main(int argc, char *argv[]) {
    char *p = (char *) 0x0001;
    int *q = (int *) 0x0001;
    printf("%p\n", p);
    printf("%p\n", q);

    if (p == (char *) q) {
        printf("p==q\n");
    } else {
        printf("p!=q\n");
    }

    // 是否是回文
    char name[5] = {'m', 'a', 'd', 'a', 'n'};
    char *ph = &name[0], *pt = &name[4];

    int flag = 1;
    while (ph < pt) {
        if (*ph == *pt) {
            ph++;
            pt--;
        } else {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("回文数\n");
    } else {
        printf("非回文数\n");
    }

    return 0;
}