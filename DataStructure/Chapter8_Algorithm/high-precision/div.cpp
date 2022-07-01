#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e6 + 10;

// c 商，r 余数
vector<int> div(vector<int> &A, int b, int &r) {
    vector<int> c;
    for (int i = A.size() - 1; i >= 0; --i) {
        r = r * 10 + A[i];
        c.push_back(r / b);
        r %= b;
    }
    reverse(c.begin(), c.end());
    while (c.size() > 0 && c.back() == 0) c.pop_back();
    return c;
}

int main() {
    string a;
    int b;
    vector<int> A;
    cin >> a >> b;

    for (int i = a.size() - 1; i >= 0; --i) A.push_back(a[i] - '0'); // A = [6, 5, 4, 3, 2, 1]

    int r = 0;
    auto C = div(A, b, r);
    for (int i = C.size() - 1; i >= 0; --i) {
        cout << C[i];
    }
    cout << endl;
    printf("%d", r);

    return 0;
}