#include <iostream>
#include <vector>

using namespace std;

const int N = 1e6 + 10;

vector<int> mul(vector<int> &A, int b) {
    vector<int> c;
    int t = 0;
    for (int i = 0; i < A.size() || t; ++i) {
        if (i < A.size()) t += A[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}

int main() {
    string a;
    int b;
    vector<int> A;
    cin >> a >> b;

    for (int i = a.size() - 1; i >= 0; --i) A.push_back(a[i] - '0'); // A = [6, 5, 4, 3, 2, 1]

    auto C = mul(A,b);
    for (int i = C.size() - 1; i >= 0; --i) {
        cout << C[i];
    }

    return 0;
}