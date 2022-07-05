#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _stuff {
    char name[4];
    int score;
} Stuff;

typedef union _un {
    char name[8];
    int score;
} Un;

// 内存格式化
#if 1
int main(int argc, char *argv[]) {

//	void p[8];
    void *p = malloc(8);
    char *cp = (char *) p;
    for (int i = 0; i < 8; i++) {
        cp[i] = 'a' + i;
    }

    for (int i = 0; i < 8; i++) {
        printf("%c\t", cp[i]);
    }
    puts("");

    short *sp = (short *) p;
    for (int i = 0; i < 4; i++) {
        sp[i] = 100 + i;
    }
    for (int i = 0; i < 4; i++) {
        printf("%d\t", sp[i]);
    }
    puts("");

    char *spp = (char *) p;
    strcpy(spp, "china");
    printf("%s\n", spp);

    Stuff *stp = (Stuff *) p;
    strcpy(stp->name, "Tom");
    stp->score = 200;

    printf("name = %s\t score = %d\n", stp->name, stp->score);

    Un *pu = (Un *) p;
    strcpy(pu->name, "aa");
    printf("name = %s\t", pu->name);
    pu->score = 300;
    printf("score = %d\n", pu->score);

    return 0;
}
#endif

#if 0
int main(int argc, char *argv[]) {
    signed char ch1 = 0xff;
    printf("%d\n", ch1);
    unsigned char ch2 = 0xff;
    printf("%u\n", ch2);
    return 0;
}
#endif