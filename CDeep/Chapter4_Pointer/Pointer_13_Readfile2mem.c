#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 课堂实战1
int main(int argc, char *argv[]) {
    FILE *pf = fopen("passwd", "r+");
    if (NULL == pf) {
        printf("error");
        exit(-1);
    }

    // 读取行数
    int lineCount = 0;
    char buf[1024];
    while (fgets(buf, 1024, pf) != NULL) {
        lineCount++;
    }

    rewind(pf);

    // 申请空间 [char *, char *, ...]
    const char **p = (char **) malloc(sizeof(char *) * (lineCount + 1)); // char* (p[])
    memset(p, 0, sizeof(char *) * (lineCount + 1));

    // 读取到内存
    int len;
    char **sp = p;
    while ((fgets(buf, 1024, pf)) != NULL) {
        len = strlen(buf);
        *sp = (char *) malloc(len + 1);
        strcpy(*sp, buf);
        sp++;
    }
    *sp = NULL;
    fclose(pf);

    // 遍历查询
    sp = p;
    while (*sp) {
        printf("%s", *sp++);
    }

    for (int i = 0; i < lineCount; i++) {
        free(p[i]);
    }
    free(p);

    return 0;
}