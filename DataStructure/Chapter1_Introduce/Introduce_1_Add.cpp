#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

const int N = 1e8;

// 求和：−1，1，−1，1，…，(−1)^n
// 看效率
int sum1(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(-1, n);
    }
    return sum;
}

int sum2(int n) {
    if (n % 2 == 0)
        return 0;
    return -1;
}

int main() {

    time_t start, end;

    start = clock();

    cout << sum1(N) << endl;
//    cout << sum2(N) << endl;

    end = clock();

    cout << "Time: " << end - start << endl;

    return 0;
}