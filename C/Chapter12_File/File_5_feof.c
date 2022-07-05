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

int main(int argc, char *argv[]) {

    FILE *pf = fopen("data.txt", "w+");
    F_PRINT_ERR(pf);
    for (char ch = 'a'; ch <= 'f'; ch++) {
        putchar(fputc(ch, pf));
    }

    printf("\n=============\n");
    rewind(pf);

    char ch;

    // 在不以"(ch = fgetc(pf) != EOF" 为判断读结束时，feof()也可以作为判断读结束

    // feof() 检测文件结束标志，若为1表示结束，为0表示没有结束；
    // 会导致多读一次字符，标志位检测滞后所导致的

    // 复现
    while(!feof(pf)) {
        ch = fgetc(pf);
        printf("%x --> %c\n", ch, ch);
        // 61 --> a
        // 62 --> b
        // 63 --> c
        // 64 --> d
        // 65 --> e
        // 66 --> f
        // ffffffff --> �
    }

//    while ((ch = fgetc(pf)) && !feof(pf)) {
//        printf("%x-->%c\n", ch, ch);
//    }

    fclose(pf);
    return 0;
}