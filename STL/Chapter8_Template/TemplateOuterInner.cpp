#include <iostream>
using namespace std;

template<typename T1>
class Outer {
    public:
        template<typename T2>
        class Inner {
            public:
                void print();
        };
};

template<typename T1>
template<typename T2>
void Outer<T1>::Inner<T2>::print() {
    cout << "print inner" << endl;
}

int main() {
    Outer<int>::Inner<int> inner;
    inner.print();
    return 0;
}
