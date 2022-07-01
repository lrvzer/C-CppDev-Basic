#include <iostream>

using namespace std;

template<int N> // 非类型参数
struct FOR {
    static void foo() {
        FOR<N-1>::foo();
        cout << "循环的执行语句" << N << endl;
    }
};

template<>
struct FOR<0> {
    static void foo() {
        cout << "循环的执行语句" << 0 << endl;
    }
};


int main() {
    FOR<100>::foo();
    return 0;
}
