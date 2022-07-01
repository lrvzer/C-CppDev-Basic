#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool func(int &v) {
    return v >= 3;
}

int main() {
    int data[5] = {1, 2, 3, 4, 5};
    int *p = find(data, data + 5, 4);
    if (p != data + 5)
        printf("%d\n", *p);
    else
        printf("find none\n");

    vector<int> vi(data, data + 5);
    vector<int>::iterator itr;
    itr = find(vi.begin(), vi.end(), 10);
    if (itr != vi.end())
        cout << *itr << endl;
    else
        cout << "find none" << endl;

    itr = find_if(vi.begin(), vi.end(), func);
    if (itr != vi.end())
        cout << *itr << endl;
    else
        cout << "find none" << endl;
    return 0;
}