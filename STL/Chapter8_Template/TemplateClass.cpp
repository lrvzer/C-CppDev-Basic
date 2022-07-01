#include <iostream>

using namespace std;

/**
 * 类模板
 */
template<typename E>
class MyMath {
    public:
        E sum(E a, E b) {
            return a + b;
        }

        E max(E a, E b);
};

// 成员方法类外部实现
template<typename E>
E MyMath<E>::max(E a, E b) {
    return a > b ? a : b;
}

int main() {
    MyMath<int> math;
    cout << math.sum(11, 12);

    return 0;
}