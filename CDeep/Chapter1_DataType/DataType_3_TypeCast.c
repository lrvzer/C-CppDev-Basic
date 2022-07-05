#include <stdio.h>

// 隐式类型转换

// 在工作中尽量避免大数据赋给小变量 ：int promotion
// 大数据赋值给小变量，低位字节对齐，truncate（截断），有可能会造成数据丢失
#if 1
int main(int argc, char *argv[]) {
    int a = 0xff;// 0000-0000 0000-0000 0000-0000 1111-1111
    char b = a;// 								  1111-1111
    printf("%d\n", b);

    int aa = 256;// 0000-0000 0000-0000 0000-0001 0000-0000
    char bb = aa;//								  0000-0000
    printf("%d\n", bb);
}
#endif

// 小数据赋值给大变量
#if 0
int main(int argc, char *argv[]) {
    char a = 0xff; // 							1111-1111
    int b = a; // 1111-1111 1111-1111 1111-1111 1111-1111
    printf("%d\n", a);

    char aa = 0x7f;// 							 0111-1111
    int bb = aa;// 0000-0000 0000-0000 0000-0000 0111-1111
    printf("%d\n", bb);

    unsigned char ua = 0xff; // 							1111-1111
    int ub = ua;        // 0000-0000 0000-0000 0000-0000 1111-1111
    printf("%d\n", ub);
}
#endif