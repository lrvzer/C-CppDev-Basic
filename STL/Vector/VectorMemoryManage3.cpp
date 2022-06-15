#include <iostream>
#include <vector>

using namespace std;

/**
 * 内存管理3 - 压入对象的指针
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
    vector<A *> vap;
    vap.reserve(10);

    A *pa = new A;
    vap.push_back(pa);
    vap.pop_back();
    delete pa;

    return 0;
}