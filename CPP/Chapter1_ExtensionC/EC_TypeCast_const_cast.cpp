
#include <iostream>

using namespace std;

// const_cast只作用于指针和引用，去const化
// const_cast理解为const semantic的补充

// no-const对象 --> const引用/指针 --> 去const --> 原非const对象修改

int main() {

    const int a = 100;
    const int &ra = a;
//    a = 100;
    cout << a << endl;
    const_cast<int &>(ra) = 200;
    cout << ra << endl;

    const int *p = &a;
    *const_cast<int *>(p) = 300;
    cout << *p << endl;

    cout << a << endl;

    struct Data {
        int a;
    };

    const Data d = {400};
    const Data &rd = d;

    const_cast<Data &>(rd).a = 600;

    cout << d.a << endl;
    cout << rd.a << endl;

    return 0;
}
