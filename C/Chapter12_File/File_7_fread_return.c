#include <stdio.h>
#include <stdlib.h>

// 成功，返回读/写的字段数；出错或文件结束，返回0。

int main(int argc, char *argv[]) {

    char rbuf[1024], buf[1024] = "12345678";

    FILE *pf = fopen("yyy.txt", "w+");
    if (NULL == pf) {
        exit(-1);
    }
    fwrite((void *) buf, 1, 8, pf);
    rewind(pf);  /* 重置指针位置 */

    int n; /* 读到完整的块 */
    while ((n = fread((void *) rbuf, 1, 3, pf)) > 0) {
        printf("read count = %d\n", n);
        for (int i = 0; i < n; i++) {
            printf("%c", rbuf[i]);
        }
        puts("");
    }

    fclose(pf);

    return 0;
}