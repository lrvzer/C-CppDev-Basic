#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int data = 1234;
	char buf[1024];
	// 用sprintf替代
//	itoa(data, buf, 10);
//	printf("%s\n", buf);
	
	return 0;
}

int main1(int argc, char *argv[]) {
	char buf[1024] = "  1234  ";
	int data  = atoi(buf);
	printf("data = %d\n", data);
	return 0;
}