#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi = {1, 3, 5, 6, 7};

    vector<int>::iterator itr;
    for (itr = vi.begin(); itr != vi.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    vector<int>::const_iterator c_itr;
    for (c_itr = vi.cbegin(); c_itr != vi.cend(); ++c_itr) {
        cout << *c_itr << " ";
    }
    cout << endl;

    vector<int>::reverse_iterator r_itr;
    for (r_itr = vi.rbegin(); r_itr != vi.rend(); ++r_itr) {
        cout << *r_itr << " ";
    }
    cout << endl;

    vector<int>::const_reverse_iterator c_r_itr;
    for (c_r_itr = vi.crbegin(); c_r_itr != vi.crend(); ++c_r_itr) {
        cout << *c_r_itr << " ";
    }
    cout << endl;

    return 0;
}