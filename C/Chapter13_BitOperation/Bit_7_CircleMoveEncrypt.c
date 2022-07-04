#include <stdio.h>
#include <stdlib.h>

void encode(char *buf, int n) {
    for (int i = 0; i < n; i++) {
        unsigned char ch = buf[i];
        buf[i] = (ch << 1) | (ch >> 7);
    }
}

void decode(char *buf, int n) {
    for (int i = 0; i < n; i++) {
        unsigned char ch = buf[i];
        buf[i] = (ch >> 1) | (ch << 7);
    }
}

int main(int argc, char *argv[]) {
//	FILE * pfr = fopen("wp.jpg", "r+");
    FILE *pfr = fopen("wp_encode.jpg", "r+");
    if (NULL == pfr)
        exit(-1);

//	FILE * pfw = fopen("wp_encode.jpg", "w+");
    FILE *pfw = fopen("wp_decode.jpg", "w+");
    if (NULL == pfw)
        exit(-1);

    int n;
    char buf[1024];
    while ((n = fread((void *) buf, 1, 1024, pfr)) > 0) {
//		encode(buf, n);
        decode(buf, n);
        fwrite((void *) buf, 1, n, pfw);
    }
}