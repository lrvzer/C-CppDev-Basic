#include <iostream>

namespace ONE {
int x = 4;
}

namespace ANOTHER {
int x = 13;
}

int main() {

    // 用法一：用
    {
        int x = 250;
        std::cout << ONE::x << std::endl;
        std::cout << ANOTHER::x << std::endl;
        std::cout << x << std::endl;
    }

    // 用法二：少用
    {
        //  int x = 250;
        using ONE::x;
        std::cout << x << std::endl;
    }

    // 用法三：禁用
    {
        using namespace ONE;
        std::cout << x << std::endl;
    }

    return 0;
}