#include <stdio.h>

// 字符串放到字符数组中
int main1() {
    char buf[1024] = "China";

    printf("%s\n", buf);
    return 0;
}

int main(int argc, char *argv[]) {
    char *pa[] = {"Google", "Oracle", "Facebook", "Apple", "NZ", NULL};

    char **p = pa;
    while (*p) {
        printf("%s\n", *p++);
    }

    return 0;
}