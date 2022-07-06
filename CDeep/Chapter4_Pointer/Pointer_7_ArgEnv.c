#include <stdio.h>

int main(int argc, char *argv[], char **env) {
//	for (int i = 0; i < argc; i++) {
//		printf("%s\n", argv[i]);
//	}

//	while (*argv) {
//		printf("%s\n", *argv++);
//	}

//	while (*env) {
//		printf("%s\n", *env++);
//	}

    char * buf = "China";
    printf("%s\n", buf);
    printf("%s\n", "China");

    printf("%p\n", buf);
    printf("%p\n", "China");

    return 0;
}