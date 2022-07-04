#include <stdio.h>

// 无名结构体: 一般而言用于定义类型,同时定义变量，并且不会带来多余的命名；会带来代码冗余
struct {
    char name[40];
    int num;
    char age;
    float score;
} s1, s2;

// 有名结构体: 一处定义，随处使用
typedef struct stu {
    char name[40];
    int num;
    char age;
    float score;
} Stu;

typedef struct stu STU;

int main(int argc, char *argv[]) {
    struct stu s;
    Stu ss;

    struct stu arr[4]; // int arr[4]
}

/** 小结
 * 定义的新类型，它的地位等同于int类型。还只是个模子，如果没有生成变量的话，是不会占用空间的；
 * 结构定义放置在程序的开始部分，位于头文件声明之后；
 * 注意{}不表示复合语句，其后有分号；
 * 结构体类型名称是  struct+结构体名，注意 struct 关键字不能省略
 */