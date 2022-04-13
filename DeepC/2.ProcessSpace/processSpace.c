#include <stdio.h>

#if 0
./a.out	aa		bb 		cc 		dd
argv[0]	argv[1]	argv[2] argv[3] argv[4]
#endif

int main(int argc, char *argv[], char ** env) {
	while (*env) {
		printf("%s\n", *env++);
	}
	return 0;
}