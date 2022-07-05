#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int num;
    char name[30];
    char sex;
    float math;
    float english;
    float chinese;
} Stu;

#if 1
int main(int argc, char *argv[]) {
    Stu s;
    FILE *pfw = fopen("stu.data", "r+");
    if (NULL == pfw)
        exit(-1);

    while (fread((void *) &s, sizeof(Stu), 1, pfw)) {
        printf("%d\t%s\t%c\t%.2f\t%.2f\t%.2f\n", s.num, s.name, s.sex, s.math, s.english, s.chinese);
    }
    fclose(pfw);
    return 0;
}
#endif

#if 0
int main(int argc, char *argv[]) {

    Stu s[5] =
        {
            {1001, "wukong", 'x', 99, 99, 99},
            {1002, "songjiang", 'x', 39, 78, 100},
            {1003, "baoyu", 'x', 79, 56, 100},
            {1004, "liudehua", 'y', 69, 100, 56},
            {1005, "zhaosi", 'z', 23, 12, 59}
        };

    FILE *pfs = fopen("stu.data", "w+");
    if (NULL == pfs)
        exit(-1);

    for (int i = 0; i < 5; i++) {
        fwrite((void *) &s[i], sizeof(Stu), 1, pfs);
    }

    fclose(pfs);

    return 0;
}
#endif