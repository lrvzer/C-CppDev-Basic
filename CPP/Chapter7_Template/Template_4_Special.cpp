#include <iostream>

using namespace std;

// 泛化版本
template<typename T>
int compare(T a, T b) {
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}

// 特化版本
template<>
int compare(const char *a, const char *b) {
    return strcmp(a, b);
}

int main() {
    int a = 10, b = 20;
    cout << compare(a, b) << endl;

    string sa = "abc", sb = "Abc";
    cout << compare(sa, sb) << endl;

    const char *pa = "abc", *pb = "Abc";
    cout << compare(pa, pb) << endl;
    return 0;
}
