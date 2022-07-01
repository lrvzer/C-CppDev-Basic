#include <iostream>

using namespace std;

template<bool>
struct IF {};

template<>
struct IF<true> {
    static void func() {
        cout << "true" << endl;
    }
};

template<>
struct IF<false> {
    static void func() {
        cout << "false" << endl;
    }
};

template<int>
struct SWITCH {
    static void func() {
        cout << "default" << endl;
    }
};

template<>
struct SWITCH<1> {
    static void func() {
        cout << "case 1" << endl;
    }
};

template<>
struct SWITCH<2> {
    static void func() {
        cout << "case 2" << endl;
    }
};

int main() {
    IF<true>::func();
    IF<false>::func();

    SWITCH<1>::func();
    SWITCH<2>::func();
    SWITCH<222>::func();
    return 0;
};