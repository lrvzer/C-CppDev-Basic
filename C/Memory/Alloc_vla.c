#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int * pa;
	int len, oldLen;
	printf("start len:");
	scanf("%d", &len);
	
	oldLen = len;
	pa = (int *) malloc (len * sizeof(int));
	for (int i = 0; i < len; i++) {
		pa[i] = 100 + i;
		printf("%d\n", pa[i]);
	}
	
	printf("start len:");
	scanf("%d", &len);
	
	pa = (int *) realloc (pa, len * sizeof(int));
	for (int i = 0; i < len; i++) {
		if (i >= oldLen)
			pa[i] = 200 + i;
		printf("%d\n", pa[i]);
	}
	
	free(pa);
	
	return 0;
}