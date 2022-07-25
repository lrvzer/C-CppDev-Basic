#include <iostream>

using namespace std;

void func() {
    cout << "void func()" << endl;
}

typedef void (*PF)();

void foo() {
    
}

int main() {
    auto p = "China";
    auto s = string("China");
    cout << sizeof(char *) << "   " << sizeof(string) << endl;
    cout << sizeof(p) << "   " << sizeof(s) << endl;
    return 0;
}

int main1() {
    auto i = 5;
    cout << sizeof(i) << endl;

    auto d = 5.5;
    cout << sizeof(d) << endl;

    auto x = i + d;
    cout << sizeof(x) << endl;

    const auto n = 10;

    auto pf = func;
    pf();

    return 0;
}