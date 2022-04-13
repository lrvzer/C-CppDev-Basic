#include <stdio.h>
/* 变量的实质：是一段内存空间的别名
 *
 * 命名规则
 * 1.由数字0-9，字母a-zA-Z，_组成，不以数字开头
 * 2.字母区分大小写
 * 3.不能是C语言中保留字，如int
 *
 * 驼峰命名法
 */
int main()
{
    int a = 4, b = 5;
    printf("a = %d\t b = %d\n", a, b);


    /* // 方法一：三方变量
    int t = a;
    a = b;
    b = t;
    */

    /* // 方法二：内存可能会溢出
    a = a + b;  // a = 4 b = 5  --> a = 9 b = 5
    b = a - b;  // a = 9 b = 5  --> a = 9 b = 4
    a = a - b;  // a = 9 b = 4  --> a = 5 b = 4
    */

    a = a^b;
    b = a^b;
    a = a^b;

    printf("a = %d\t b = %d\n", a, b);

    return 0;
}
