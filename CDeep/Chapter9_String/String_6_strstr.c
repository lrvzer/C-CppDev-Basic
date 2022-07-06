#include <stdio.h>
#include <string.h>

char *myStrstr(char *str, char *subStr);

int calcStrCountInstr(char *str, char *subStr) {
    int count = 0;
    int len = strlen(subStr);
    while (str = myStrstr(str, subStr)) {
        count++;
        str += len;
    }
    return count;
}

#if 0
char * myStrstr(char * str, char * subStr) {
    int n = strlen(subStr);
    if (*subStr) {
        while (str = strchr(str, *subStr)) {
            if (!strncmp(str, subStr, n)) {
                return str;
            }
            str++;
        }
        return NULL;
    }
    else {
        return str;
    }
}
#endif

char *myStrstr(char *str, char *subStr) {
    if (*subStr) {
        while (*str) {
            for (int n = 0; *(str + n) == *(subStr + n); n++) {
                if (*(subStr + n + 1) == '\0')
                    return str;
            }
            str++;
        }
        return NULL;
    } else {
        return str;
    }
}

int main(int argc, char *argv[]) {
    char str1[] = "1234abc1234";
    char str2[] = "abc";

//	printf("%s\n", strstr(str1, str2));
    printf("%s\n", myStrstr(str1, str2));
//	printf("%d\n", calcStrCountInstr(str1, str2));
    return 0;
}