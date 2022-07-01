#include <stdio.h>
#include <string.h>

// 标准库不作入参型检查

int myStrlen(char * str) {
	int len = 0;
	for (; *str++; len++);
	return len;
}

int main(int argc, char *argv[]) {
	char *p = "china";
	char arr[] = "china";
	
//	printf("%p\n", p);
//	printf("%p\n", "china");
	
	char *q = p;
	int count = 0;
	
//	while (*q != '\0') {
//	while (*q) {
//	while (*q++) {
//		count ++;
//		q++;
//	}
	for (; *q++; count++);
	printf("count = %d\n", count);
	
	int len = strlen(p);
	printf("len = %d\n", len);
	
	int myLen = myStrlen(p);
	printf("mylen = %d\n", myLen);
	
	return 0;
}