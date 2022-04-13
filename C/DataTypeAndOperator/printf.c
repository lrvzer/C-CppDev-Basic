#include <stdio.h>

int main()
{
    int data = 0x55;
    printf("%#x\t%#o\t%d\n", data, data, data);

    float f = 10.01;
    printf("%.2e\n", f);
    // 输出最小宽度为10，精度为2
    printf("%-10.2f", f);
    printf("end");

    return 0;
}
