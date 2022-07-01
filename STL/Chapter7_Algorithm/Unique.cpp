#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 1, 2, 3, 3, 4, 5, 4, 5, 6, 7};
    sort(v.begin(), v.end());
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());
    for (int i: v)
        cout << i << " ";
    cout << "\n";

    // remove consecutive  spaces
    string s = "wanna go  to  space?";
    auto end = unique(s.begin(), s.end(),
                      [](char l, char r) {
                          return isspace(l) && isspace(r) && l == r;
                      });
    cout << string(s.begin(), end) << '\n';
    return 0;
}