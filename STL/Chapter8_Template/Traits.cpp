#include <iostream>
#include <type_traits>

using namespace std;

int main() {
    // 判断是否为void类型
    cout << boolalpha ;
    cout << is_void<void>::value << endl;
    cout << is_void<int>::value << endl;

    // 判断是否是指针
    cout << "int         " << is_pointer<int>::value <<endl;
    cout << "int *       " << is_pointer<int *>::value <<endl;
    cout << "int **      " << is_pointer<int **>::value <<endl;
    cout << "int(*)(int) " << is_pointer<int(*)(int)>::value <<endl;

    // 是否是数组
    cout << "int           " << is_array<int          >::value << endl;
    cout << "int[3]        " << is_array<int[3]       >::value << endl;
    cout << "array<int, 3> " << is_array<array<int, 3>>::value << endl;
    cout << "string        " << is_array<string       >::value << endl;
    cout << "string[3]     " << is_array<string[3]    >::value << endl;
}