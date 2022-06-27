#include <stdio.h>

int main() {
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:printf("First");
            break;
        case 2:printf("Second");
            break;
        default:printf("default");
            break;
    }
}