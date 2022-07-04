#include <stdio.h>
#include <string.h>

void encode(char *pc, char ch) {
    int len = strlen(pc);
    for (int i = 0; i < len - 1; i++) {
        if (pc[i] == ch)
            continue;
        pc[i] ^= ch;
    }
}

void decode(char *pc, char ch) {
    int len = strlen(pc);
    for (int i = 0; i < len - 1; i++) {
        if (pc[i] == ch)
            continue;
        pc[i] ^= ch;
    }
}

int main(int argc, char *argv[]) {

    char buf[] = "I love xxx";
    char ch = 'o';

    printf("buf = %s\n", buf);
    encode(buf, ch);
    printf("buf = %s\n", buf);
    decode(buf, ch);
    printf("buf = %s\n", buf);

    return 0;
}