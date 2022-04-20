#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char buf[] = "name:zhangsan:passwd:11111:sex:x:address:guangzhou";
	for (int i = 0; i < sizeof(buf); i++) {
		printf("%c", buf[i]);
	}
	putchar(10);
	
	char * p = strtok(buf, ":");
	while (p) {
		printf("%s\n", p);
		p = strtok(NULL, ":");
	}
	return 0;
}