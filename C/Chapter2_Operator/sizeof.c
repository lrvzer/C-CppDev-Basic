#include <stdio.h>

int main() {

    printf("%d\n", sizeof 5);
    int a = 1;
    double b = 100.0;
    int res = sizeof a + b; //sizeof 比+的优先级要高。
    printf("%d\n", res);

    return 0;
}