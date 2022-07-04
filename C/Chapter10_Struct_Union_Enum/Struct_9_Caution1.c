#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _stu {
    char *name; // name指针需要指向一个合法的地址
    int score;
} stu;

void func() {
    stu s;
    s.name = (char *) malloc(100);
    strcpy(s.name, "JimGreen");
    s.score = 90;
    printf("%s\n%d\n", s.name, s.score);
    free(s.name);
}

int main(int argc, char *argv[]) {
    func();
    return 0;
}