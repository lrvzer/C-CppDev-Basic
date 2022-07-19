#include <iostream>
#include "MyString.h"

using namespace std;

int main() {

    // string
    cout << "==== String ====" << endl;
    string s1 = "hello";
    string s2(s1);
    string s3 = s1;
    string s4;
    s4 = s1;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;

    s1[0] = 'c';
    cout << "s1[0] = c: " << s1 << endl;
    cout << "s1.at(2): " << s1.at(2) << endl;
    const char *ps = s1.c_str();

    cout << "s1 == s2: " << (s1 == s2) << endl;
    cout << "s2 >= s3: " << (s2 >= s3) << endl;

    string s5 = s1 + s2;
    cout << "s5: " << s5 << endl;
    s5 += s3;
    cout << "s5: " << s5 << endl;

    // my string
    cout << "==== MyString ====" << endl;
    MyString ms1 = "hello";
    MyString ms2(ms1);
    MyString ms3 = ms1;
    MyString ms4;
    ms4 = ms1;

    cout << "ms1: " << ms1 << endl;
    cout << "ms2: " << ms2 << endl;
    cout << "ms3: " << ms3 << endl;
    cout << "ms4: " << ms4 << endl;
    ms1[0] = 'c';
    cout << "ms1[0] = c: " << s1 << endl;
    cout << "ms1.at(2): " << ms1.at(2) << endl;
    const char *pms = ms1.c_str();

    cout << "ms1 == ms2: " << (ms1 == ms2) << endl;
    cout << "ms2 >= ms3: " << (ms2 >= ms3) << endl;

    MyString ms5 = ms1 + ms2;
    cout << "ms5: " << ms5 << endl;
    ms5 += ms3;
    cout << "ms5: " << ms5 << endl;

    MyString ms6;
    cin >> ms6;
    cout << "ms6: " << ms6 << endl;

    return 0;
}