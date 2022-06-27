#include <stdio.h>
#include <string.h>

int main() {

    char buf[10];

    do {
        scanf("%s", buf);
        printf("%s\n", buf);
    } while (strcmp(buf, "hello") != 0);

    return 0;
}