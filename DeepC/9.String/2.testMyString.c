#include <stdio.h>
#include "myString.h"

#if 0
int myStrlen(const char * src) {
	int len = 0;
	while (*src++) {
		len++;
	}
	return len;
}

char * myStrcpy(char * dest, const char * src) {
	char * d = dest;
	while ((*dest++ = *src++));
	return d;
}

char * myStrcat(char * dest, const char * src) {
	char * d = dest;
	while (*dest) dest++; // 指定到'\0'位置，需要从此位置进行追加
	while ((*dest++ = *src++));
	return d;
}

int myStrcmp(const char * s1, const char * s2){
	for (; (*s1 && *s2) && (*s1++ == *s2++); );
	return *s1 - *s2;
}
#endif

int main(void) {
	char name1[1024] = "wangguilin";
	char name2[1024] = "wangguilin";
	
	if (myStrcmp(name1, name2) != 0) {
		printf("!=");
	} else {
		printf("==");
	}
	
	return 0;
}

int main2(void) {
	
	char buf[1024] = "i love";
	char buf2[1024] = "c++";
	
	myStrcat(myStrcat(buf, " "), buf2);
	printf("%s\n", buf);
	return 0;
}

int main1(int argc, char *argv[]) {
	char * s = "Great Wall";
	int len = myStrlen(s);
	printf("len =  %d\n", len);
	
	char buf[100];
	printf("buf = %s\n", myStrcpy(buf, s));
	
	return 0;
}