#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

#if 0
int main() {
    srand(time(nullptr));
    vector<int> t;
    vector<vector<int>> tt(5, t);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < rand() % 20; ++j) {
            tt[i].push_back(j);
        }
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < tt[i].size(); ++j) {
            cout << tt[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#endif

int main() {
    vector<int> t;
    vector<vector<int>> tt(5, t);

    for (int i = 0; i < 5; ++i) {
        tt[i].resize(5);
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << (tt[i][j] = i + j) << " ";
        }
        cout << endl;
    }
}