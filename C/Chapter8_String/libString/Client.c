#include <stdio.h>
#include "myString.h"


int main(int argc, char *argv[]) {
	char *s1 = "abc", *s2 = "abc";
	int ret = myStrcmp(s1, s2);
	
	if (ret == 0)
		printf("===");
	return 0;
}