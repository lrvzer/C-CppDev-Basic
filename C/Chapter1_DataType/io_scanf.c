#include <stdio.h>

int main()
{
#if 0
    int a, b;
    // 天然的间隔：空格、tab、enter；第二次 enter结束
    // 非格式串，需要按原样输入
    scanf("%d%d", &a, &b);
    int sum = a+b;
    printf("sum = %d\n", sum);


    // %c，如果有超过2个%c，留间隔
    char aa = 'a', bb = 'b';
    scanf("%c %c", &aa, &bb);
    printf("%d %d\n", aa, bb);
#endif

    char ch;
    ch = getchar();
    printf("%c\n", ch);
    printf("aa");
    putchar(10);
    printf("bb");
    return 0;
}
