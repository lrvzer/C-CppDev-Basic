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

#if 1
int main() {
    FILE *pf = fopen("data.txt", "r+");
    F_PRINT_ERR(pf);

    char ch;
    while ((ch = fgetc(pf)) != EOF) {
        putchar(ch);
    }

    fclose(pf);
    return 0;
}
#endif

#if 0
int main() {
    FILE *pf = fopen("data.txt", "w+");
    F_PRINT_ERR(pf);
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        putchar(fputc(ch, pf));
    }
    fclose(pf);
    return 0;
}
#endif