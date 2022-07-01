#include <iostream>
#include <vector>

/**
 * 内存管理1 - 压入基本数据类型
 * size
 * resize
 * capacity
 * reserve
 */
int main() {
#if 0
    std::vector<int> vi;
    vi.reserve(16); // 事先预估内存容量，避免内存的重复申请；只可变大vector的capacity，不可以使其减小
    for (int i = 0; i < 10; ++i) {
        vi.push_back(i);
        std::cout << "size: " << vi.size() << std::endl;
        std::cout << "capacity: " << vi.capacity() << std::endl; // realloc
    }

    vi.shrink_to_fit();
    std::cout << "size: " << vi.size() << std::endl;
    std::cout << "capacity: " << vi.capacity() << std::endl; // realloc
#endif

    // capacity >= size
    // resize()可以改变size的大小，不可以改变capacity的大小；变大等价于调用push_back()，变小等于pop_back()
    std::vector<int> vi = {1, 2, 3, 4, 5};
    std::cout << vi.capacity() << std::endl;
    vi.resize(10);
    vi.resize(1); // 不能缩小
//    vi.shrink_to_fit();
    std::cout << vi.size() << std::endl;
    std::cout << vi.capacity() << std::endl;
    return 0;
}