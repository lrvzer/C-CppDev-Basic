#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i = 1; i < 10; i++) {
		if (i % 3 == 0) {
			// 	跳过当前循环，进入下一循环
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}