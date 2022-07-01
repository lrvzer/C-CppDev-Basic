#include    <iostream>
#include    <vector>
#include    <algorithm>
#include    <iterator>
#include <numeric>

using namespace std;

int main2() {
    vector<int> vi(10);
    iota(vi.begin(), vi.end(), 1);
    for (auto i : vi) {
        cout << i << " ";
    }
    cout << endl;

    vector<int>vi2(10);
    copy(vi.begin(), vi.end(), vi2.begin());
    for (auto i : vi2) {
        cout << i << " ";
    }

    return 0;
}

int main() {
    ostream_iterator<int> intWriter(cout, "\n");
    *intWriter = 42;
    intWriter++;
    *intWriter = 77;
    intWriter++;
    *intWriter = -5;
    vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // write all elements without any delimiter
    copy(coll.cbegin(), coll.cend(),
         ostream_iterator<int>(cout));
    cout << endl;
    // write all elements with "<" as delimiter
    copy(coll.cbegin(), coll.cend(),
         ostream_iterator<int>(cout, " < "));
    cout << endl;
}