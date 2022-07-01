#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
    //    10    20    30    30    20    10    10    20
    //    bounds    of    range:
    int *pbegin = myints;
    int *pend = myints + sizeof(myints) / sizeof(int);
    pend = remove(pbegin, pend, 20);
    //    10    30    30    10    10    ?        ?       ?
    cout << "range contains:";
    for (int *p = pbegin; p != pend; ++p)
        cout << ' ' << *p;
    cout << '\n';
    return 0;
}

int main2() {
    string str1 = "Text with some spaces";
    str1.erase(remove(str1.begin(), str1.end(), '    '),
               str1.end());
    cout << str1 << '\n';
    string str2 = "Text\n with\tsome\t whitespaces\n\n";
    str2.erase(remove_if(str2.begin(),
                         str2.end(),
                         [](char x) { return isspace(x); }),
               str2.end());
    cout << str2 << '\n';
}