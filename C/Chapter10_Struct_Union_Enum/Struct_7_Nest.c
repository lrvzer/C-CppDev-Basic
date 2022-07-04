#include <stdio.h>

struct _birth {
    int year;
    int month;
    int day;
};

typedef struct _stu {
    char name[1024];
    int num;
    char sex;
    float score;
    struct _birth birth;
} Stu;

int main(int argc, char *argv[]) {
    Stu s = {
        "wangwu", 1001, 'f', 99, {1999, 1, 10}
    };

    printf("name: %s\n", s.name);
    printf("year: %d\n", s.birth.year);
    printf("month: %d\n", s.birth.month);
    return 0;
}