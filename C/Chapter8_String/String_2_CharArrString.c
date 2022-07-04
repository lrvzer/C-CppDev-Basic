#include <stdio.h>

// 字符串和字符数组之间的相同性质，并不代表字符串可以与任意的字符数组之间划等号

// 等价关系   sizeof(字符数组) >= sizeof(字符串)
// 不等价关系  sizeof(字符数组) < sizeof(字符串)
int main(int argc, char *argv[]) {
    char arr[] = "china"; // 自适应

    printf("arr = %s\n", arr);
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    return 0;
}