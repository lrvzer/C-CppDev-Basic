#include <stdio.h>
#include <string.h>

void disBin(int d) {
	int i = 32;
	while (i--) {
		if (d & (1 << i))
			printf("1");
		else
			printf("0");
		
		if (!(i % 8)) {
			putchar(' ');
		}
	}
	putchar(10);
}

int main(int argc, char *argv[]) {
	char a[1000];
	for (int i = 0; i < 1000; i++) {
		a[i] = -1 - i;
	}
	
	int len = strlen(a);
	printf("len = %d\n", len);
	return 0;
}