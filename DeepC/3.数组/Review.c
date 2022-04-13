#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 见ReturnHeapArray.c
int allocSpace(char ** p, int n) {
	*p = malloc(n);
	if (*p == NULL)
		return 0;
	else
		return 1;
}

int main(int argc, char * argv[]) {
	
	char * p = NULL;
	// ret只指示申请的成功与失败
	int ret = allocSpace(&p, 100);
	if (ret) {
		strcpy(p, "China");
		printf("%s\n", p);
		free(p);
	}
	
	return 0;
}

#if 0
void foo(char **pa) {
	*pa = "China";
}

int main(int argc, char *argv[]) {
	char * a = NULL;
	foo(&a);
	printf("a = %s\n", a);
	return 0;
}
#endif

#if 0
void foo(int *pa) {
	*pa = 100;
}

int main(int argc, char *argv[]) {
	int a = 10;
	foo(&a);
	printf("%d\n", a);
	return 0;
}
#endif