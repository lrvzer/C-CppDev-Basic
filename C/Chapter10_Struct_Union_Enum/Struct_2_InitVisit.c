#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct stu {
    char name[40];
    int num;
    char sex;
    float score;
} Student;

#if 1
int main(void) {
    // 堆上
    Student *ps = (Student*) malloc (sizeof(Student));
    strcpy(ps->name, "zhaoliu");
    ps->num = 1002;
    ps->sex = 'm';
    ps->score = 96;
    printf("name: %s\nnum: %d\nsex: %c\nscore: %.0f\n", ps->name, ps->num, ps->sex, ps->score);
    free(ps);
    return 0;
}
#endif

// 点成员运算符 指向成员运算符
#if 0
int main(void) {
    // 栈内存上
    struct stu s = {"zhangsan", 1001, 'f', 99};
    struct stu *ps = &s;
    printf("name: %s\nnum: %d\nsex: %c\nscore: %.0f\n", ps->name, ps->num, ps->sex, ps->score);
    printf("name: %s\nnum: %d\nsex: %c\nscore: %.0f\n", (*ps).name, (*ps).num, (*ps).sex, (*ps).score);
    return 0;
}
#endif

// 初始化是一种特殊的语法，与赋值不等价
// 凡事 基本类型，既可以在定义的时候初始化，也可以先定义再赋值
// 凡事 构造类型，要么在定义的时候初始化，不可以先定义再以初始化的方式赋值
#if 0
int main(int argc, char *argv[]) {

    struct stu s; // = {"zhangsan", 1001, 'f', 99};
//    strcpy(s.name, "zhangsan"); // s.name = "zhangsan"; // error
//    s.num = 1001;
//    s.sex = 'f';
//    s.score = 99;
    scanf("%s%d %c%f", s.name, &s.num, &s.sex, &s.score);
    printf("name: %s\nnum: %d\nsex: %c\nscore: %.0f\n", s.name, s.num, s.sex, s.score);

    return 0;
}
#endif