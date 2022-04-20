#include <stdio.h>

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

int myStrcmp(const char * s1, const char * s2) {
	for (; (*s1 && *s2) && (*s1++ == *s2++); );
	return *s1 - *s2;
}

char * myStrchr(char * str, char ch) {
	while (*str) {
		if (*str == ch)
			return str;
		str++;
	}
	return NULL;
}