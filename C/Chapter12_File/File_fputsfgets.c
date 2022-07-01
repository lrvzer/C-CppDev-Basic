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

/*
在去读n-1个字符前，遇到了'\n'，连同'\n'一并读进；
在去读n-1个字符前，没有遇到'\n'，也没有EOF，此时就读到n-1个字符，并在其后添加'\0'；
在去读n-1个字符前，没有遇到'\n'，遇到EOF，并在其后添加'\0'
*/
int main() {
    FILE * pf = fopen("xx.txt", "r");
    F_PRINT_ERR(pf);
    
    char buf[1024];
    while (fgets(buf, 1024, pf) != NULL) {
        printf("%s", buf);
    }
        
    fclose(pf);
    return 0;
}

int main1() {
    FILE * pf = fopen("xx.txt", "w");
    F_PRINT_ERR(pf);
    
    
    fputs("aaaaaa\n", pf);
    fputs("bbbbbb\n", pf);
    fputs("cccccc\n", pf);
    
    fclose(pf);
    return 0;
}