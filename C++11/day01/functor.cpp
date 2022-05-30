#include <iostream>
#include <vector>

using namespace std;

class Compare {
    public:
        Compare(bool f = true):flag(f) {}
        bool operator()(int a, int b) {
            if (flag == true) {
                return a < b;
            } else {
                return a > b;
            }
        }
    protected:
        bool flag;
};

int main() {

    vector<int> vi = {3, 5, 1, 6, 2, 9};
    // sort(vi.begin(), vi.end(), Compare());
    sort(vi.begin(), vi.end(), [](int a, int b) { return a > b;});
    for (auto & i : vi)
    {
        cout << i << endl;
    }
    
    return 0;
}