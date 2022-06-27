#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i = 1; i < 10; i++) {
		if (i == 3) {
			// 	结束当前整个for循环
			break;
		}
		printf("%d\n", i);
	}
	return 0;
}