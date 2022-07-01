#include <iostream>

using namespace std;

/**
 * 函数模板
 */
template<typename T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int in = sum<int>(10, 11);
    cout << in << endl;

    auto fl = sum<float>(1.34f, 2.33);
    cout << fl << endl;
    return 0;
}