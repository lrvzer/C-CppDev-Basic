#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(nullptr));
    vector<string> vs;
    long startTime = clock();
    char buf[1024];
    for (int i = 0; i < 1000000; ++i) {
        snprintf(buf, 10, "%d", rand() % 1000000);
        vs.push_back(string(buf));
    }

    cout << "insert 100 0000 time milli time: " << clock() - startTime << endl;

    startTime = clock();
    auto itrFind = find(vs.begin(), vs.end(), "255");
    cout << "find 255 milli time: " << clock() - startTime << endl;

    return 0;
}