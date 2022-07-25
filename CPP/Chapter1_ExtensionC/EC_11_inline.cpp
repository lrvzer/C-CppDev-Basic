#include <iostream>

using namespace std;

#define SQR(x) ((x)*(x))

inline int sqrt(int x) {
    return x * x;
}

int main() {
    int i = 0;
    while (i < 5) {
//        printf("%d\n", SQR(i++));
        printf("%d\n", sqrt(i++));
    }
    return 0;
}
