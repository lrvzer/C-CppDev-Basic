#include <iostream>

using namespace std;

class Compare {
    public:
        Compare(bool f = true) : _flag(f) {}
        bool operator()(int a, int b) const {
            if (_flag)
                return a > b;
            else
                return a <= b;
        }

    private:
        bool _flag;
};

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
//    sort(arr, arr + 10, Compare());
    sort(arr, arr + 10, Compare(false));
    for (auto &a: arr) {
        cout << a << '\t';
    }
    cout << endl;
}
