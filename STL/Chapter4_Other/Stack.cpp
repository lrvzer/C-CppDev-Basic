#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> dc;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        dc.push(ch);
    }

    while (!dc.empty()) {
        cout << dc.top() << " ";
        dc.pop();
    }
    cout << endl;

    return 0;
}