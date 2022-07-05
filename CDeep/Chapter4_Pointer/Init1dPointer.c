#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 通过二级指针，可以改变一级指针的指向问题
// 也叫对一级指针初始化的问题

// 将返回值和错误处理，整到一到

int fopenRet(FILE **pf, char *file, char *mod) {
	*pf = fopen(file	, mod);
	if (NULL == *pf) {
		printf("open error!");
		return 0;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	
	
	return 0;
}

#if 0
int alloc2dSpace(char* *p, int n) {
	*p = (char *) malloc(n);
	if (NULL == *p)
		return 0;
	return 1;
}

int main(int argc, char *argv[]) {
	char *p = NULL;
	int ret = alloc2dSpace(&p, 200);
	if (ret) {
		strcpy(p, "china");
		printf("%s\n", p);
		free(p);
		p = NULL;
	}
	return 0;
}
#endif