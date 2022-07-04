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

    FILE *prf = fopen("File_fputcfgetc.c", "r");
    F_PRINT_ERR(prf);
    FILE *pwf = fopen("File_fputcfgetc_copy.c", "w");
    F_PRINT_ERR(pwf);

    char ch;
    while ((ch = fgetc(prf)) != EOF) {
        fputc(ch, pwf);
    }
    fclose(prf);
    fclose(pwf);
    return 0;
}