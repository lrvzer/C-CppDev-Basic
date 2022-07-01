#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int *p = (int *) calloc(10, sizeof(int)); // 对堆上的内存进行初始化0，相当于malloc + memset
	for (int i = 0; i < 10; i++) {
		printf("%d\n", p[i]);
	}
	
	free(p);
	
	return 0;
}