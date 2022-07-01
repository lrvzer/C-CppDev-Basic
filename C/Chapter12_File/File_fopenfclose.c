#include <stdio.h>

// 通过fopen打开一个文件，返回一个FILE *指针
// 以后，我们所有对于文件的操作，即操作FILE * 指针pf
int main() {
    FILE * pf = fopen("data.txt", "w");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        fputc(ch, pf);
    }
    fclose(pf);
    return 0;
}