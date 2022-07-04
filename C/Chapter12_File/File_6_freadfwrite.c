#include <stdio.h>

int main(int argc, char *argv[]) {

    FILE *pf = fopen("mm.txt", "w+");
    int arr[10] = {0, 1, 0xffffffff, 2, 3, 4, 5, 6, 7, 8};

    fwrite((void *) arr, 4, 10, pf);

    rewind(pf);

    int arr_copy[10];
    fread((void *) arr_copy, 4, 10, pf);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr_copy[i]);
    }

    fclose(pf);
    return 0;
}

int main1(int argc, char *argv[]) {

    char buf[1024] = "abc\0defg";
    FILE *pfa = fopen("xxx.txt", "w+");

    fputs(buf, pfa);

    rewind(pfa);

    char readBuf[1024];
    fgets(readBuf, 1024, pfa);
    printf("%s\n", readBuf);
    fclose(pfa);

    FILE *pfb = fopen("yyy.txt", "wb+");

    fwrite((void *) buf, 1, 8, pfb);

    rewind(pfb);

    fread((void *) readBuf, 1, 8, pfb);

    for (int i = 0; i < 8; i++) {
        printf("%x-->%c\n", readBuf[i], readBuf[i]);
    }

    fclose(pfb);

    return 0;
}