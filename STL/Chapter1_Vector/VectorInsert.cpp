#include <iostream>
#include <vector>

using namespace std;

void printv(vector<int> &v) {
    for (auto &i: v) {
        cout << i << '\t';
    }

    cout << endl << "==============" << endl;
}

int main() {
    vector<int> vi;
    vi = {1, 9, 4, 2, 3, 4, 5};
    auto itr = find(vi.begin(), vi.end(), 3);
    if (itr == vi.end()) {
        cout << "find none" << endl;
    } else {
        cout << "Find it" << endl;
        vi.erase(itr);
    }
    printv(vi);
    return 0;
}

int main2() {
    int arr[3] = {222, 333, 444};
    vector<int> vi;
    vi = {1, 2, 3, 4, 5};
//	vi.insert(vi.begin(), 100);
//	vi.insert(vi.begin(), 5, 10);
//	vi.insert(vi.begin(), arr, arr+2);
    vi.insert(vi.begin(), {11, 22, 33});
    vi.erase(vi.begin(), vi.begin() + 3);
//	vi.resize(0);
    vi.resize(10, 666);
    vi.clear();
    printv(vi);
    return 0;
}

int main1(int argc, char *argv[]) {

    vector<int> vi;
    vi = {1, 2, 3, 4, 5, 6};
    vi.push_back(100);

    for (auto &i: vi) {
        cout << i << '\t';
    }
    cout << endl;

    while (!vi.empty()) {
        cout << vi.back() << endl;
        vi.pop_back();
    }
    cout << vi.size() << endl;

    return 0;
}