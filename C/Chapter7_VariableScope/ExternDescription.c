#include <stdio.h>

/* gcc ExternDescription.c Other.c */

extern int a;

int main(int argc, char *argv[]) {
	printf("%d\n", a);
	return 0;
}