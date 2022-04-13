#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e)\
do{\
    if (e == NULL) {\
        printf("open error");\
        exit(-1);\
    }\
}\
while(0)

// 通过fopen打开一个文件，返回一个FILE *指针
// 以后，我们所有对于文件的操作，即操作FILE * 指针pf
int main() {
    FILE * pf = fopen("xx.txt", "r+");
    F_PRINT_ERR(pf);
    
    char ch;
    while ((ch = fgetc(pf)) != EOF) {
        putchar(ch);
    }
    
    fclose(pf);
    return 0;
}

int main1() {
    FILE * pf = fopen("xx.txt", "w+");
    F_PRINT_ERR(pf);
    for (char ch = 'a'; ch <= 'z'; ch++) {
        putchar(fputc(ch, pf));
    }
    fclose(pf);
    return 0;
}