#include <stdio.h>
#include <stdlib.h>

// 堆上二维空间
// 一级指针作为返回值返回
void * alloc2DSpace(int unitSize, int row, int line) {
	void * p = malloc(unitSize * row * line);
	return p;
}

int main(int argc, char *argv[]) {
	int (*p)[5] = alloc2DSpace(sizeof(int), 3, 5);
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			p[i][j] = i+j;
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", p[i][j]);
		}
		putchar(10);
	}
	free(p);
	return 0;
}