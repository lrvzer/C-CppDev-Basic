#include <stdio.h>

void func0(int i) {
    printf("your enter %d so func%d is called\n", i, i);
}

void func1(int i) {
    printf("your enter %d so func%d is called\n", i, i);
}

void func2(int i) {
    printf("your enter %d so func%d is called\n", i, i);
}

void func3(int i) {
    printf("your enter %d so func%d is called\n", i, i);
}

int main(int argc, char *argv[]) {

    void (*fpa[])(int) = {func0, func1, func2, func3};

    while (1) {
        int choice;
        printf("pls input number between 0 and 3\n");
        scanf("%d", &choice);
        switch (choice) {
            case 0: fpa[choice](choice);
                break;
            case 1: fpa[choice](choice);
                break;
            case 2: fpa[choice](choice);
                break;
            case 3: fpa[choice](choice);
                break;
            default: return 0;
        }
    }
    return 0;
}