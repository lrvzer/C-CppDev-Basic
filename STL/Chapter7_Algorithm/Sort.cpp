#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int &v) {
    cout << v << " ";
}

int main() {
    vector<int> vi;
    for (int i = 0; i < 5; i++) vi.push_back(i);
    // sort(vi.begin(),vi.end(),greater<int>());
    // sort(vi.begin(),vi.end(),less_equal<int>());
    stable_sort(vi.begin(), vi.end(), greater_equal<int>());
    for_each(vi.begin(), vi.end(), print);
    return 0;
}