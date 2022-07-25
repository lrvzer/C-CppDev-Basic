#include <iostream>

// namespace嵌套
namespace ONE {
int x = 4;
int y = 100;

namespace ANOTHER {
int x = 14;
}
}

int main() {
    std::cout << ONE::ANOTHER::x << std::endl;
    return 0;
}
