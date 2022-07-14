#include <iostream>

using namespace std;
// 定义一个指针，指向类的成员，不是指向对象的成员

class StaticMember {
    public:
        static int data;
        static void dis(int x);
};

void StaticMember::dis(int x) {
    cout << x << endl;
}

int StaticMember::data = 10;

int main() {

    int *pData = &StaticMember::data;
    cout << *pData << endl;

    void (*pf)(int) = &StaticMember::dis;
    (*pf)(1);
    return 0;
}