#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
栈上的空间是不可以返回的
堆上的空间是可以返回的
#endif

char * foo(int n) {
//	char arr[100];
	char * arr = (char *) malloc (n);
	return arr;
}

int getMem(char ** p, int n) {
	printf("getMem p address: %p\n", *p);

	*p = malloc(n);
	printf("getMem after malloc p address: %p\n", *p);

	if (*p == NULL)
		return 0;
	else
		return 1;
}

int main(int argc, char *argv[]) {
	char * pArr = foo(100);
	strcpy(pArr, "china");
	printf("%s\n",pArr);
	
	
	char * p;
	printf("Main   p address: %p\n", p);
	int ret = getMem(&p, 100);
	printf("Main   after malloc p address: %p\n", p);

	if (ret)
		strcpy(p, "Hello, world");
	
//	printf("%s\n", p);
	free(p);
	p = NULL;
	return 0;
}