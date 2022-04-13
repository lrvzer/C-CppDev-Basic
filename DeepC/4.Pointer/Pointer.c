#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	return 0;
}

int main1(int argc, char *argv[]) {
	char * p;
	printf("%lu\n", sizeof(p));
	
	char * pp = malloc(100);
	printf("%lu\n", sizeof(pp));
	
	struct Stu {
		char name[1024];
		int age;
	} * ppp;
	printf("%lu\n", sizeof(ppp));
	
	int (* pppp) [1024];
	printf("%lu\n", sizeof(pppp));
	return 0;
}