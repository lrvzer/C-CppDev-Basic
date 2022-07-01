#include <stdio.h>

// 常量的表现形式有两种：字面量和宏
// 常量是有类型的

/*

1.整型常量：八进制、十进制、十六进制
2.实型常量：小数形式、指数形式
3.字符常量
4.字符串常量

*/
#define PI 3.1415926
#define Price 10

int main() {
    int age = 30;
    age += 10; // 10为字面量
    return 0;
}
