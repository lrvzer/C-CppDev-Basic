#include <stdio.h>

/*
void mySwap(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
*/

// a + b = a;
// b = a - b;
// a = a - b;
void mySwap(int *pa, int *pb) {
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
}

/*
void mySwap(int *pa, int *pb) {
	*pa ^= *pb;
	*pb ^= *pa;
	*pa ^= *pb;
}
*/

int main(int argc, char *argv[]) {
	int a = 3, b = 4;
	printf("a = %d\tb = %d\n", a, b);
	mySwap(&a, &b);
	printf("a = %d\tb = %d\n", a, b);
	return 0;
}