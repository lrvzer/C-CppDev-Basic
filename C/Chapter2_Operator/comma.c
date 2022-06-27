#include<stdio.h>

int main(void)
{
    int xx;
    xx = 1+1, 2+1, 3+2, 6*7;
    printf("xx = %d\n", xx); // 2

    xx = (1+1, 2+1, 3+2, 6*7);
    printf("xx = %d\n", xx); // 42
    return 0;
}