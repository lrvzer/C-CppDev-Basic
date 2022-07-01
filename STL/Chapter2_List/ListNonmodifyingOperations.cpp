#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &li) {
    for (auto &item: li) {
        cout << item << " ";
    }
    cout << endl;
}

class A {
    public:
        A() {
            cout << "无参构造函数 " << this << endl;
        }
        A(int i) : _data(i) {
            cout << "有参构造函数 " << this << endl;
        }
        A(const A &other) {
            this->_data = other._data;
            cout << "拷贝构造 " << this << " from " << &other << endl;
        }
        A &operator=(const A &other) {
            cout << "拷贝赋值 " << this << " from " << &other << endl;
            if (this != &other) {
                this->_data = other._data;
            }
            return *this;
        }
        ~A() {
            cout << "析构函数 " << this << endl;
        }
        friend bool operator==(const A &one, const A &another) {
            if (one._data == another._data)
                return true;
            else
                return false;
        }
    private:
        int _data;
};

int main() {
    // Compare2
    list<A> lA1 = {A(1), A(2), A(3), A(4)};
    list<A> lA2 = {A(1), A(2), A(3), A(4)};
    if (lA1 == lA2) {
        cout << "==" << endl;
    } else {
        cout << "!=" << endl;
    }

    return 0;
}

int main1() {

    list<int> liL({1, 3, 5, 7, 9, 2, 4, 6, 8, 10});

    cout << "size: " << liL.size() << endl;
    while (!liL.empty()) {
        cout << liL.back() << " ";
        liL.pop_back();
    }
    cout << endl << "size: " << liL.size() << endl;

    // Compare1
    list<int> li1 = {1, 2, 3, 4};
    list<int> li2 = {1, 2, 3, 4};
    if (li1 == li2) {
        cout << "==" << endl;
    } else {
        cout << "!=" << endl;
    }
    return 0;
}

