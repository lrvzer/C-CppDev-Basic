#include <stdio.h>

/* 使用for循环实现九九乘法表*/
int main(int argc, char *argv[]) {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d * %d = %d\t", j, i, i*j);
		}
		putchar(10);
	}
	return 0;
}