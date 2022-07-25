#include <iostream>

using namespace std;

class A {
    public:
        A() = default;
        ~A() = default;
        A(const A &anoter) = default;
        A &operator=(const A &another) = default;
};

int main() {
    A a();
    return 0;
}