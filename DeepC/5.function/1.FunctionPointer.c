#include <stdio.h>

// 函数名的本质，代表了一段可执行性文件代码的首地址

// void (*p) (void) = print;
// 返回   *    入参

void print() {
	printf("abc\n");
	return;
}

int main(int argc, char *argv[]) {
	print();
	printf("%p\n", print);
	
	void (*p) (void) = print;
	p();
	
//	void (*po) (void) = &print;
//	(*po)();
	
	typedef void (*PF) (void);
	PF pf = print;
	pf();
	return 0;
}