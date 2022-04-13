#include <stdio.h>

// &
// 除了char占一个字节，占一个地址
// 其他类型包含多个字节，也就是拥有多个地址
// 当我们对一个变量取地址的时候，拿到的是低位字节的地址

int main(int argc, char *argv[]) {
	
	char a; short b; int c; double d;
	
	printf("&a = %p  ", &a); printf("%#x\n", &a);
	printf("&b = %p  ", &b); printf("%#x\n", &b);
	printf("&c = %p  ", &c); printf("%#x\n", &c);
	printf("&d = %p  ", &d); printf("%#x\n", &d);
	
	printf("sizof(&a) = %lu\n", sizeof(&a));
	printf("sizof(&b) = %lu\n", sizeof(&b));
	printf("sizof(&c) = %lu\n", sizeof(&c));
	printf("sizof(&d) = %lu\n", sizeof(&d));
	
	return 0;
}