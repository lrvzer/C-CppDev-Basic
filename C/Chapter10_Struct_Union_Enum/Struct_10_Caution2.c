#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _stu {
    char *name;
    int score;
} stu;

// 申请空间的时候从外到内
// 释放空间的时候从内到外

int main(int argc, char *argv[]) {
    stu *ps = (stu *) malloc(sizeof(stu));
    ps->name = (char *) malloc(100);
    strcpy(ps->name, "JimGreen");
    ps->score = 90;

    printf("%s\n%d\n", ps->name, ps->score);

    free(ps->name);
    free(ps);
    return 0;
}