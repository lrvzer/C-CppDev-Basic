#include <stdio.h>
#include <string.h>

void reverseStr(char * src, char * bak) {
	if (*src) {
		reverseStr(src+1, bak);
//		printf("%c", *src);
		strncat(bak, src, 1);
	}
}

int main(int argc, char *argv[]) {
	char buf[] = "china";
	char bak[10];
	reverseStr(buf, bak);
	printf("%s\n", bak);
	return 0;
}