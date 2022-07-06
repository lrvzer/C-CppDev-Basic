#include <stdio.h>
#include <string.h>

// 去除非可见字符，以空格为代表，去除空格

//   a  d d c

void trimStrRightSpace(char *src) {
    while (*src) src++;
    while (*(--src) == ' ') {
        *src = '\0';
    }
}

void trimStrLeftSpace(char *src) {
    if (*src != ' ') return;
    char *t = src;
    while (*t == ' ') t++;
    while ((*src++ = *t++));
}

void trimStrAllSpace(char *src) {
    char *t = src;
    while (*t) {
        if (*t != ' ') {
            *src++ = *t;
        }
        t++;
    }
    *src = '\0';
}

int main(void) {
    char buf[1024] = "   ch  ina   ";
    printf("---%s---\n", buf);
//	trimStrRightSpace(buf);
//	printf("---%s---\n", buf);
//	
//	trimStrLeftSpace(buf);
//	printf("---%s---\n", buf);
    trimStrAllSpace(buf);
    printf("---%s---\n", buf);
}

int main1(int argc, char *argv[]) {
    FILE *pf = fopen("log.properties", "r");
    char name[100];
    fgets(name, 100, pf);

    if (!strcmp(name, "wangguilin")) {
        printf("登陆\n");
    } else {
        printf("非法\n");
    }

    return 0;
}