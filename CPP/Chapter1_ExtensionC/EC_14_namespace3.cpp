#include <iostream>

// 同名命名空间自动合并

namespace nameA {
int a = 1;
}

namespace nameA {
int b = 2;
}

int main() {
    using namespace nameA;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}
