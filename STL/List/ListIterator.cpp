#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> li = {1, 3, 5, 6, 7};

    list<int>::iterator itr;
    for (itr = li.begin(); itr != li.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    list<int>::const_iterator c_itr;
    for (c_itr = li.cbegin(); c_itr != li.cend(); ++c_itr) {
        cout << *c_itr << " ";
    }
    cout << endl;

    list<int>::reverse_iterator r_itr;
    for (r_itr = li.rbegin(); r_itr != li.rend(); ++r_itr) {
        cout << *r_itr << " ";
    }
    cout << endl;

    list<int>::const_reverse_iterator c_r_itr;
    for (c_r_itr = li.crbegin(); c_r_itr != li.crend(); ++c_r_itr) {
        cout << *c_r_itr << " ";
    }
    cout << endl;

    return 0;
}
