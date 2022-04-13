#include <stdio.h>
void disbinary(char ch);
int main()
{
//    char a = 0;
//    disbinary(a);
//    char b = 1;
//    disbinary(b);
//    char c = 2;
//    disbinary(c);
//    char d = 127;
//    disbinary(d);
//    char e = -128;
//    disbinary(e);
//    char f = -2;
//    disbinary(f);
//    char g = -1;
//    disbinary(g);

    for (char ch = -128; ch < 127; ch++) {
        printf("%d --> ", ch);
        disbinary(ch);
    }
    return 0;
}


void disbinary(char ch) {
    int i = 8;
    while (i--) {
        if ((1<<i) & ch) {
            printf("1");
        } else {
            printf("0");
        }
        if (i%4 == 0) {
            printf(" ");
        }
    }
    putchar(10);
}


/*

-1
|-1|
0000 0001
1111 1110   取反
1111 1111   加1
*/
