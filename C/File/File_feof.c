#include <stdio.h>
#include <stdlib.h>

#define F_PRINT_ERR(e)\
do{\
	if (e == NULL) {\
		printf("open error");\
		exit(-1);\
	}\
}\
while(0)

int main(int argc, char *argv[]) {
	
	FILE * pf = fopen("xx.txt", "w+");
	F_PRINT_ERR(pf);
	for (char ch = 'a'; ch <= 'f'; ch++) {
		putchar(fputc(ch, pf));
	}
	
	printf("\n=============\n");
	rewind(pf);
	
	char ch;
	/*
		feof检测文件结束标志，或为1表示结束，为0表示没有结束
		会导致多读一次字符，标志位检测滞后所导致的
	*/
	while ((ch = fgetc(pf)) && !feof(pf)) {
		printf("%x-->%c\n", ch, ch);
	}
	
	
	fclose(pf);
	return 0;
}