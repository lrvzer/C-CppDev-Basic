#include <iostream>
using namespace std;

// template<class T1, class T2, class T3>
// T1 sum(T2 a, T3 b) {
//     return a + b;
// }

template<class T2, class T3>
auto sum(T2 a, T3 b) -> decltype(a+b) {
    return a + b;
}

int main() {
    int i = 100;
    double d = 100.1;

    // auto s = sum<decltype(i+d), int, double>(i, d);
    auto s = sum(i, d);
    cout << s << endl;
    return 0;
}