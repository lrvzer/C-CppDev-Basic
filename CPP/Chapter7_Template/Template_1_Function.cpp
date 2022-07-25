#include <iostream>
using namespace std;

template<typename T>
void mySwap(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

int main() {
    int a = 3, b = 4;
    cout << "a = " << a << " b = " << b << endl;
    mySwap(a, b);
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
