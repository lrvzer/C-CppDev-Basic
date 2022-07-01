#include <stdio.h>

void func() {
    printf("hello");
    return;
    printf("world");
}

int main() {
    func();
    return 0;
}