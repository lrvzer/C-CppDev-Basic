#include <stdio.h>
#include <string.h>


// strcpy被拷贝的区域，必须有足够的空间容纳

char * myStrcpy(char * dest, char *src) {
	char *p = dest;
	
	/* 先赋值，再判断，再++ */
	while ((*dest++ = *src++));

	return p;
}

int main(int argc, char *argv[]) {
	char name[200];
	char *pName = "China";
	char name2[200] = "guilin";
	
	myStrcpy(myStrcpy(name, pName), name2);
	printf("name = %s\n", name);
	return 0;
}