#include <stdio.h>

// 'a' 97
// 'A' 65

int main() {
    unsigned char ch;
    for (ch = 0; ch < 128; ch++) {
        printf("%d -> %c\t\t", ch, ch);
        if (ch % 8 == 0)
            putchar(10);
    }
    return 0;
}
