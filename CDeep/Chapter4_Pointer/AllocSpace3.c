#include <stdio.h>
#include <stdlib.h>

int alloc2DSpace(int ***p, int unitSize, int row, int line) {
	*p = (int **) malloc(sizeof(void*) * row);
	if (*p != NULL) {
		for (int i = 0; i < row; i++) {
			(*p)[i] = malloc(unitSize * line);
		}
		return 1;
	} else {
		return 0;
	}
}

void free2DSpace(int **p, int row) {
	for (int i = 0; i < row; i++) {
		free(p[i]);
	}
	free(p);
}

int main(int argc, char *argv[]) {
	
	int **p;
	int row = 3, line = 5;
	int ret = alloc2DSpace(&p, sizeof(int), row, line);
	
	if (ret) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				p[i][j] = i+j + 12;
			}
		}
		
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				printf("%d\t", *(*(p+i)+j));
			}
			putchar(10);
		}
	}
	free2DSpace(p, row);
	return 0;
}