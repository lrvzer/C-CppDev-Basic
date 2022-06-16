#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int first[5] = {1, 2, 5, 7, 9};
    int second[5] = {1, 2, 6, 7, 10};
    vector<int> vi(20);
    vector<int>::iterator itr;
    sort(first, first + 5);
    sort(second, second + 5);
//    itr = set_difference(first, first + 5, second, second + 5, vi.begin());
    itr = set_difference(second, second + 5, first, first + 5, vi.begin());
    vi.resize(itr - vi.begin());
    copy(vi.begin(), vi.end(), ostream_iterator<int>(cout, " "));
    return 0;
}