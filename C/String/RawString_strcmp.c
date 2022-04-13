#include <stdio.h>
#include <string.h>

#if 0
s1 > s1  1
s1 == s1 0
s1 < s1  -1
#endif

#if 0
int myStrcmp(char * s1, char * s2) {
	while (*s1 && *s2) {
		if (*s1 > *s2) {
			return 1;
		} else if (*s1 < *s2) {
			return -1;
		} else {
			s1++;
			s2++;
		}
	}
	
	if (*s1 == '\0' && *s2 != '\0')
		return -1;
	else if (*s1 != '\0' && *s2 == '\0')
		return 1;
	else
		return 0;
}
#endif

#if 0
int myStrcmp(char * s1, char * s2) {
	while (*s1 && *s2) {
		for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++) {
			if (*s1 != *s2)
				break;
		}
	}
	
	return *s1 - *s2;
}
#endif

int myStrcmp(char * s1, char * s2) {
//	while (*s1 && *s2) {
//		for (; *s1 && *s2; s1++, s2++) {
//			if (*s1 != *s2)
//				break;
//		}
//	}
	for (; *s1 && *s2 && (*s1 != *s2); s1++, s2++);
	return *s1 - *s2;
}

int main(int argc, char *argv[]) {
	
	char * s1 = "china";
	char * s2 = "ichina";
	
	int cmp = myStrcmp(s1, s2);
//	int cmp = strcmp(s1, s2);
	
	if (cmp == 0) {
		printf("s1 == s2");
	} else if (cmp > 0) {
		printf("s1 > s2");
	} else {
		printf("s1 < s2");
	}

	

	return 0;
}