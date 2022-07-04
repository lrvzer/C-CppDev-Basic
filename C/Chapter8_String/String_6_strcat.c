#include <stdio.h>
#include <string.h>

char *myStrcat(char *dest, char *src) {
    char *d = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++) != '\0');
    return d;
}

int main(int argc, char *argv[]) {

    char firstName[30] = "Jim";
    char middleName[30] = " - ";
    char lastName[30] = "Green";

//	strcat(firstName, lastName);

    char *p = firstName, *q = lastName;

    while (*p) p++;

    // v1
//	while (1) {
//		*p = *q;
//		if (*p == '\0') {
//			break;
//		}
//		p++;
//		q++;
//	}

    // v2
//	while (1) {
//		if ((*p = *q) == '\0') {
//			break;
//		}
//		p++;
//		q++;
//	}

    // v3
//	while (*p = *q) {
//		p++;
//		q++;
//	}

    // v4
//	while (*p++ = *q++);

    myStrcat(myStrcat(firstName, middleName), lastName);
    printf("firstName = %s\n", firstName);

    return 0;
}