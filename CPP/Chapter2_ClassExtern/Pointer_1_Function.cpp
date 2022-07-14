#include <iostream>

using namespace std;

void foo(int a) {
    cout << "foo" << a << endl;
    return;
}

int main() {

    void (*pf)(int) = foo;
    pf(10);
    return 0;
}