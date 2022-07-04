#include <stdio.h>

// 提供一组常量的别名，以便于程序清晰可读
typedef enum _bool {
    False, True
} Boolean;

enum Day {
    Mon, Tue, Wed, Thus = 100, Fri, Sat, Sun
};

int main(int argc, char *argv[]) {
    printf("Mon = %d\n", Mon);
    printf("Mon = %d\n", Fri);

    enum Day day;
    day = 1000;

    return 0;
}