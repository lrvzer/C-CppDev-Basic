#include <stdio.h>

// 求和
int main(int argc, char *argv[]) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += i;
	}
	
	printf("sum = %d\n", sum);
	printf("average = %f\n", (float)sum/10);
}