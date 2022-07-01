#include <iostream>

using namespace std;

// 递归
template<int N>
class Sum {
    public:
        enum {
            value = N + Sum<N - 1>::value
        };
};

// 需要特化0
template<>
class Sum<0> {
    public:
        enum {
            value = 0
        };
};

template<unsigned long N>
struct BinToDec {
    static unsigned const val = BinToDec<N/10>::val * 2 + N % 10;
};

template<>
struct BinToDec<0> {
    static unsigned const val = 0;
};


int main() {

    // 利用编译时期递归实现求和函数
    cout << Sum<100>::value << endl;

    cout << BinToDec<10000>::val << endl;
    return 0;
}