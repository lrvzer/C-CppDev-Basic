#include <iostream>
#include <vector>

using namespace std;

/**
 * 内存管理2 - 压入对象
 * resize > current size  == push_back
 * resize < current size  == pop_back
 *
 * reserve 预留空间，不会构造
 * resize 会调用构造和析构函数
 */
class A {
    public:
        A() {
            cout << "无参构造函数 " << this << endl;
        }
        A(int i) : _data(i) {
            cout << "有参构造函数 " << this << endl;
        }
        A(const A &other) {
            cout << "拷贝构造 " << this << " from " << &other << endl;
        }
        A &operator=(const A &other) {
            cout << "拷贝赋值 " << this << " from " << &other << endl;
        }
        ~A() {
            cout << "析构函数 " << this << endl;
        }
    private:
        int _data;
};


int main() {
    vector<A> va;
    va.reserve(10);
    A a;
    va.push_back(a);
    va.push_back(a);
    va.push_back(a);

    va.insert(va.begin(), A());
    return 0;
};

int main2() {
    vector<A> va;
    A a;
    va.push_back(a);
    va.push_back(a);
    va.push_back(a);
    return 0;
};

int main1() {
    vector<A> va;
    va.reserve(100);

    A a;
    va.push_back(a);
    va.push_back(a);
    va.push_back(a);
    {
        va.resize(2); // pop_back
    }
    cout << "========" << endl;
    return 0;
}