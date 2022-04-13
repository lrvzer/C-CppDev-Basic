#include <stdio.h>

int main(int argc, char *argv[]) {
	/* 以下是死循环 */
Target:
	printf("goto\n");
	goto Target;
	
	return 0;
}