#include <iostream>
using namespace std;

template<typename T>
void quickSort(T *p, int low, int high) {
    if (low < high) {
        int _l = low, _h = high;
        T pivot = p[_l];

        while (_l < _h) {
            while (_l < _h && pivot <= p[_h])
                _h--;

            p[_l] = p[_h];

            while (_l < _h && pivot >= p[_l]) _l++;
            p[_h] = p[_l];
        }
        p[_l] = pivot;
        quickSort(p, low, _l - 1);
        quickSort(p, _l + 1, high);
    }
}

int main() {
    double arr[8] = {1, 2, 3, 8, 7, 4, 5};
    quickSort(arr, 0, 7);
    for (auto i: arr) {
        cout << i << "\t";
    }
    cout << endl;

    string sarr[8] = {"a", "b", "c", "x", "y", "z", "m", "x"};
    quickSort(sarr, 0, 7);
    for (auto i: sarr)
        cout << i << "\t";
    cout << endl;
    return 0;
}
