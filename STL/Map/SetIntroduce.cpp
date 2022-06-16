#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string, less<string>> ss;
    ss.insert("a");
    ss.insert("b");
    ss.insert("c");
    for (auto i : ss) {
        cout << i << endl;
    }
    return 0;
}