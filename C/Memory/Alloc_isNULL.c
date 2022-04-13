#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 申请、判空、使用/释放（配对存在）、置空

int main(int argc, char *argv[]) {
	
	char * pc = (char *) malloc (100);
	if (NULL == pc) {
		printf("error1\n");
		exit(-1);
	}
	
	strcpy(pc, "abcdefg");
	free(pc);

	pc = NULL;
	
	
	return 0;
}