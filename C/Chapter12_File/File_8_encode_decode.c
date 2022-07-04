#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ./sh -c src dest
// ./sh -d src dest

// -c /Users/Lrwei/Pictures/WallPapers/wp.jpg /Users/Lrwei/Pictures/WallPapers/wp_encode.jpg
// -d /Users/Lrwei/Pictures/WallPapers/wp_encode.jpg /Users/Lrwei/Pictures/WallPapers/wp_decode.jpg


void encode(int *buf, int n) {
    for (int i = 0; i < n; i++) {
        buf[i]++;
    }
}

void decode(int *buf, int n) {
    for (int i = 0; i < n; i++) {
        buf[i]--;
    }
}

int main(int argc, char *argv[]) {

    if (argc != 4) {
        printf("use parameters -d[-c] src dest\n");
        exit(-1);
    }

    FILE *pfr = fopen(argv[2], "rb+");
    if (NULL == pfr)
        exit(-1);
    FILE *pfw = fopen(argv[3], "wb+");
    if (NULL == pfw) {
        fclose(pfr);
        exit(-1);
    }

    int buf[1024];
    int n;

    if (strcmp(argv[1], "-c") == 0) {
        while ((n = fread((void *) buf, 1, 1024, pfr)) > 0) {
            encode(buf, n);
            fwrite((void *) buf, 1, n, pfw);
        }
    } else if (strcmp(argv[1], "-d") == 0) {
        while ((n = fread((void *) buf, 1, 1024, pfr)) > 0) {
            decode(buf, n);
            fwrite((void *) buf, 1, n, pfw);
        }
    } else {
        printf("arg error");
    }

    fclose(pfw);
    fclose(pfr);

    return 0;
}