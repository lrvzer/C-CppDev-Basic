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

        void dump() {
            cout << "data: " << _data << endl;
        }
    private:
        int _data;
};

int main() {
    list<A> la;
    la.push_back(A());
    la.push_back(A(5));

    // 对象含参构造器的参数
    la.emplace(la.end(), 100);
    la.emplace_back(200);
    la.emplace_front(10);

    for (auto item : la) {
        item.dump();
    }

    return 0;
}

int main1() {

    // Insert 1
    int arr[5] = {9, 99, 999, 9999};
    list<int> li = {1, 3, 5, 7, 9};
    li.insert(li.begin(), 0);
    li.insert(li.end(), 5, 11);
    li.insert(li.end(), arr, arr + 4);
    printList(li);
    return 0;
}
