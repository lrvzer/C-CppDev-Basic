#include <stdio.h>
#include <string.h>

int calcChCountInStr(char *buf, char ch) {
    int count = 0;
    while ((buf = strchr(buf, ch))) {
        count++;
        buf++;
    }
    return count;
}

int main(int argc, char *argv[]) {
    char buf[1024] = "aaaaaaabbbbbccccddddeeeefff";
    int count = calcChCountInStr(buf, 'a');
    printf("count = %d\n", count);
    return 0;
}

#if 0
char * myStrchr(char * str, char ch) {
    while (*str) {
        if (*str == ch)
            return str;
        str++;
    }
    return NULL;
}


int main(int argc, char *argv[]) {

    char str[1024] = "Great Wall";
    char ch = 'e';
//	printf("%s\n", strchr(str, ch));
    printf("%s\n", myStrchr(str, ch));
    return 0;
}
#endif