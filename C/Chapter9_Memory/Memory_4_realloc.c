#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char *pa = (char *) malloc(10);
    pa = realloc(pa, 20);
    strcpy(pa, "1234567890ooo");
    printf("pa = %s\n", pa);
    free(pa);

    return 0;
}