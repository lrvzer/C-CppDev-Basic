#include <stdio.h>

typedef struct _stuff {
	char name[10];
	char sex;
} Stuff;

// 初始化是不同于赋值的
int main(int argc, char *argv[]) {
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8};
	Stuff s = {"china", 'm'};
}