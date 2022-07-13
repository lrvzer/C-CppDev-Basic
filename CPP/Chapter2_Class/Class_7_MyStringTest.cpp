#include <iostream>
#include "MyString.h"

using namespace std;

int main() {

    MyString ms1;
    MyString ms2("Hello");
    ms2.dis();

    ms1 = ms2;
    ms1.dis();

    return 0;
}