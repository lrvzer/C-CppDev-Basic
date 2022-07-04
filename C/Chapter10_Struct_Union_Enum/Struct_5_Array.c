#include <stdio.h>

// 结构体数组本质，一维数组，只不过是一维中的每个成员又是结构体

typedef struct stu {
    char name[40];
    int num;
    char sex;
    float score;
} Student;

int main(int argc, char *argv[]) {
    Student s[] = {
        {"wangwu", 1001, 'f', 90},
        {"zhangs", 1002, 'm', 80},
        {"lisuan", 1003, 'f', 99},
    };
    for (int i = 0; i < sizeof(s) / sizeof(Student); i++) {
        printf("name: %s\tnum: %d\tsex: %c\tscore: %.0f\n", s[i].name, s[i].num, s[i].sex, s[i].score);
    }
    return 0;
}