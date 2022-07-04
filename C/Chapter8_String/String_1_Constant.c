#include <stdio.h>

// 字符串，是双引号

/*
进程空间

stack

heap
data  （全局变量 static局部变量	常量）
text
*/

int main(int argc, char *argv[]) {

    printf("sizeof(\"China\") = %lu\n", sizeof("China")); // China\0

    char *p = "China";

    printf("p = %p, p+1 = %p, p[0] = %c, 0[p] = %c\n", p, p + 1, p[0], 0[p]);
    printf("\"China\" = %p, \"China\"+1 = %p, \"China\"[0] = %c, 0[\"China\"] = %c\n",
           "China",
           &"China"[1],
           "China"[0],
           0["China"]);

    return 0;
}