#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<char> dc;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        dc.push(ch);
    }

    while (!dc.empty()) {
        cout << dc.front() << " ";
        dc.pop();
    }
    cout << endl;

    return 0;
}
