#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _stu {
    char name[10];
    float score;
} Stu;

int compare(const void *pa, const void *pb) {
    if (strcmp(((Stu *) pa)->name, ((Stu *) pb)->name) != 0)
        return strcmp(((Stu *) pa)->name, ((Stu *) pb)->name);
    else
        return ((Stu *) pb)->score > ((Stu *) pa)->score ? 1 : -1;
}

int main(int argc, char *argv[]) {

    Stu stu[] = {
        {"aaa", 23.5},
        {"xxx", 45.6},
        {"bbb", 89},
        {"xxx", 23.4},
        {"yyy", 100}
    };

    qsort(stu, sizeof(stu) / sizeof(*stu), sizeof(Stu), compare);

    for (int i = 0; i < sizeof(stu) / sizeof(Stu); i++) {
        printf("name = %s, %f\n", stu[i].name, stu[i].score);
    }
    return 0;
}