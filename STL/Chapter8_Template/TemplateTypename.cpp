#include <iostream>

using namespace std;

/**
 * typename
 */
// 1.定义模板类型参数E，也可以用class E定义
template<typename E>
class A {
    public:
        // 2.指定iterator是一种类型
        typename E::iterator *iter;
};

class B {
    public:
        typedef int iterator; // 内嵌类型
};

int main() {
    // 模板类
    A<B> a;
    cout << typeid(a.iter).name() << endl;
    return 0;
}