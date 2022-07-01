#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<char> dc;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        dc.push_back(ch);
    }

    while (!dc.empty()) {
        cout << dc.back() << " ";
        dc.pop_back();
    }
    cout << endl;

    return 0;
}