#include <stdio.h>

int main(int argc, char *argv[]) {
    int data = 0x12345678;

//	char * p = &data; // 丢失了类型，但是C语言灵活
    char *p = (char *) &data; // 强转
    printf("%x\n", *p); // 78
    return 0;
}