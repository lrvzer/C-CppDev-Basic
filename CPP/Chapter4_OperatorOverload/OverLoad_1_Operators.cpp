#include <iostream>
#include "MyComplex.h"

using namespace std;

int main() {
    MyComplex c1 = {10, 0};
    MyComplex c2 = {20, 0};
    MyComplex c3;

    // +
    // c3 = c1 + c2;
//    cout << c1 << c2 << c3;
//
//    c1 += c2;
//    cout << c1;

//    cout << -c1;

    // ++ //
//    c1++; // c1++++ // error
//    cout << c1;
//    ++ ++c1;
//    cout << c1;

    // << >> //

    cin >> c3;
    cout << c3;

    return 0;
}