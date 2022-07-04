#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char * pArr[] = {"China", "Ameria", "Canda", "Japan"};
	for (int i = 0; i < 4; i++) {
		printf("%p\t %s\n", pArr[i], pArr[i]);
	}
		
	int n = sizeof(pArr) / sizeof(*pArr);
	char * pt;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(pArr[i], pArr[j]) > 0) {
				pt = pArr[i];
				pArr[i] = pArr[j];
				pArr[j] = pt;
			}
		}
	}
    printf("=======\n");
	for (int i = 0; i < 4; i++) {
		printf("%p\t %s\n", pArr[i], pArr[i]);
	}
}