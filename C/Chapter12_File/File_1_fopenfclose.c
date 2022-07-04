#include <stdio.h>

// 通过fopen打开一个文件，返回一个FILE *指针
// 以后，我们所有对于文件的操作，即操作FILE * 指针pf
int main() {
    FILE *pf = fopen("data.txt", "w");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        fputc(ch, pf);
    }
    fclose(pf);
    return 0;
}

/*
    r/r+  文件存在则打开，不存在ERROR
    w/w+  文件存在则覆盖，不存在新建
    a/a+  文件存在则追加，不存在新建

    w/a   不可读取
*/