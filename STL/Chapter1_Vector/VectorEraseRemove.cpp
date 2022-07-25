#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << vi.size() << endl;
    vi.erase(remove(vi.begin(), vi.end(), 5), vi.end());
    cout << vi.size() << endl;
    for (auto &i: vi) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}