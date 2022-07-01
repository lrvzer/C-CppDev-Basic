#include <stdio.h>

/**
 * 格式串
 * "%[标志][输出最小宽度][.精度][长度]类型"
 */
int main() {
    // 整型
    int data = 0x55;
    printf("十六进制：%x\t%#x%X\t%#X\n", data, data, data, data);
    printf("八进制：%o\t%#o\n", data, data);
    printf("十进制：%d\t%i\n", data, data);

    // 浮点数
    float f = 100.01f;
    printf("%.2f\n", f);
    printf("%.2e\t%.2E\n", f, f);
    printf("%.2g\t%.2G\n", f, f); // 精简
    // 输出最小宽度为10，精度为2
    printf("%-10.2fEOF\n", f);

    char ch = 'a';
    printf("%c\n", ch);
    printf("%p\n", &ch);

    char buf[] = "hello, world";
    printf("%s\n", buf);
    return 0;
}
