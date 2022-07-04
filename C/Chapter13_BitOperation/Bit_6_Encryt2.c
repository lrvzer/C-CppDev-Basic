#include <stdio.h>
#include <string.h>

void encode(char *buf, char *px) {
    int len = strlen(buf);
    int n = strlen(px);

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (buf[i] == px[j]) {
            j++;
        } else {
            buf[i] ^= px[j++];
        }

        if (j == n)
            j = 0;
    }
}

void decode(char *buf, char *px) {
    int len = strlen(buf);
    int n = strlen(px);

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (buf[i] == px[j]) {
            j++;
        } else {
            buf[i] ^= px[j++];
        }

        if (j == n)
            j = 0;
    }
}

int main(int argc, char *argv[]) {

    char buf[] = "I love xxx";
    char ch[] = "abc";

    printf("buf = %s\n", buf);
    encode(buf, ch);
    printf("buf = %s\n", buf);
    decode(buf, ch);
    printf("buf = %s\n", buf);

    return 0;
}