#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// heap内存，可以用于申请大空间，需要手动申请与释放
// malloc是以字节为单位进行申请
// free

int main(int argc, char *argv[]) {

	char * p = (char *)malloc(1024*1024*10);
	strcpy(p, "abcd");
	printf("over!");
	free(p);
	return 0;
}