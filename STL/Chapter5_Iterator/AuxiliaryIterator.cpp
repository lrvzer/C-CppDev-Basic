#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    list<int> li = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto lItr = li.begin();
//    lItr += 3; // err
    advance(lItr, 3);
    auto lItr2 = next(lItr, 2);
    cout << *lItr2 << endl;
    int n = distance(lItr, lItr2);
    cout << "distance: " << n << endl;

    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto vItr = vi.begin();
    vItr += 3;

    return 0;
}