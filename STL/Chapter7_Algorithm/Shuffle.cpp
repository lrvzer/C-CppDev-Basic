#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isOdd(int i) {
    return (i % 2) == 1;
}

int main() {
    int data[10] = {3, 6, 9, 2, 5, 8, 1, 4, 7, 0};
    vector<int> vi(data, data + 10);
    random_shuffle(vi.begin(), vi.end());
    for (auto i: vi) {
        cout << i << endl;
    }
    return 0;
}
