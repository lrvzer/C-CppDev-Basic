#include <stdio.h>

char * myStrcat(char *dest, char *src) {
	char* d = dest;
	while (*dest) dest++;
	while ((*dest++ = *src++));
	return d;
}

char * myStrcpy(char * dest, char *src) {
	char* d = dest;
	while ((*dest++ = *src++));
	return d;
}

int myStrcmp(char * s1, char * s2) {
	for (; *s1 && *s2 && (*s1 == *s2); s1++, s2++);
	return *s1 - *s2;
}

int myStrlen(char * str) {
	int len = 0;
	for (; *str++; len++);
	return len;
}