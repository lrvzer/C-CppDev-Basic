/* memchr example */
#include <stdio.h>
#include <string.h>
// 查找一段空间中的一个字符，若存在则返回，所查找到字符的指针，若无，返回 NULL。

int main() {
    char *pch;
    char str[] = "Example string";
    pch = (char *) memchr(str, 'p', strlen(str));
    if (pch != NULL)
        printf("'p' found at position %d.\n", pch - str + 1);
    else
        printf("'p' not found.\n");
    return 0;
}