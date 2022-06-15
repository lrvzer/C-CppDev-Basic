#include <iostream>
#include <vector>

using namespace std;

/**
 * 内存管理4 - 插入删除效率
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

    cout << "=============" << endl;
    // 高效
//    va.push_back(a);
//    va.insert(va.end(), a);
//    {
//        va.pop_back();
////        va.erase(va.end() - 1);
//    }
    cout << "=============" << endl;

    // 低效
    {
        va.erase(va.begin());
        cout << "+++++++++++" << endl;
    }
    cout << "=============" << endl;
    return 0;
}