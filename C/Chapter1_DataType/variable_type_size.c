#include <stdio.h>

/**
 * 基础数据类型占用字节
 */
int main(void)
{
    printf("char       size = %d\n",sizeof(char));
    printf("short      size = %d\n",sizeof(short ));
    printf("int        size = %d\n",sizeof(int ));
    printf("long       size = %d\n",sizeof(long int));
    printf("long long  size = %d\n",sizeof(long long));
    printf("float      size = %d\n",sizeof(float));
    printf("double     size = %d\n",sizeof(double));
    printf("long double size = %d\n",sizeof(long double));
    return 0;
}