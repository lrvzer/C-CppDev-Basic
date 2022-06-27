#include <stdio.h>

int main() {
    int score = 91;
    if (score >= 90)
        printf("优秀");
    else if (score >= 80)
        printf("良");
    else if (score >= 60)
        printf("及格");
    else
        printf("不及格");
}