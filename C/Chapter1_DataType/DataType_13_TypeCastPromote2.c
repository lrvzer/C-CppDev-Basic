#include <stdio.h>

int main()
{
    char ch = -1;
    short sh = -1;
    int in = -1;
    printf("%hhx\n", ch); // ff
    printf("%hx\n", sh);  // ffff
    printf("%x\n", in);   // ffff ffff

    for (char ch = '0'; ch <= '9'; ch++) {
        printf("%d\t", ch);
    }
    putchar(10);

    for (char ch = '0'; ch <= '9'; ch++) {
        printf("%c\t", ch);
    }
    putchar(10);

    printf("%lu\n", sizeof(0.0f));
    printf("%lu\n", sizeof(0.0l));
    printf("%lu\n", sizeof(01lu));

    return 0;
}
