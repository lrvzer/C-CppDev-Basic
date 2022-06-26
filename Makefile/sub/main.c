#include <stdio.h>
#include "print.h"

#ifdef DEBUG
#define LOG() puts("debug version")
#else
#define LOG()
#endif

int main(int argc, char* argv[]) {
	LOG();
	print();
	return 0;
}
