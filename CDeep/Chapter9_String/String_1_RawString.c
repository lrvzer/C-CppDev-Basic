#include <stdio.h>
#include <string.h>

int main(void) {
    char bf1[10];
    char bf2[10];
    for (int i = 0; i < 10; i++) {
        bf1[i] = 'a' + i;
    }
    strncpy(bf2, bf1, 9);
    bf2[9] = '\0';
    printf("%s\n", bf2);

    char *buf = "asdsdfsffdfa";
    char arr[40];
    strncpy(arr, buf, sizeof(arr) - 1);
    arr[sizeof(arr) - 1] = '\0';
    printf("%s\n", arr);

    return 0;
}

// 读越界
int main2(void) {
    char buf[5] = "china";
    return 0;
}

// 等价
int main1(int argc, char *argv[]) {
    char buf[] = "china";

    printf("sizeof(buf) = %lu\n", sizeof(buf));
    printf("buf      = %p\n", buf);
    printf("buf + 1  = %p\n", buf + 1);
    printf("%s\n", buf);

    printf("sizeof(\"china\") = %lu\n", sizeof("china"));
    printf("\"china\"      = %p\n", "china");
    printf("\"china\" + 1  = %p\n", "china" + 1);
    printf("%s\n", "china");

    return 0;
}