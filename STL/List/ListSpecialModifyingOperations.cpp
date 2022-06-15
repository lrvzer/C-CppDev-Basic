#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

using namespace std;

template<typename T>
void printList(T &t) {
    for (auto &item: t) {
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

        friend bool operator<(const A &one, const A &another) {
            return one._data < another._data;
        }

        friend bool operator>(const A &one, const A &another) {
            return one._data > another._data;
        }

        void dump() {
            cout << "data: " << _data << endl;
        }
    private:
        int _data;
};

// 排序
void sortUse1() {

    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    sort(arr, arr + 10, greater<int>());
    printList(arr);

    vector<int> vi(arr, arr + 10);
    sort(vi.begin(), vi.end(), less<int>());
    printList(vi);

    list<int> li(arr, arr + 10);
//    li.sort(); // less<int>()
    li.sort(greater<int>());
    printList(li);
}

// not1 有一个参数的时候使用
// not2 有两个参数的时候使用

void sortUse2() {
    srand(time(nullptr));
    list<A> la;
    for (int i = 0; i < 10; ++i) {
        la.emplace_back(rand() % 100);
    }
//    la.sort();
    la.sort(not2(less<A>()));
//    la.sort(greater<A>());

    for (auto &a: la) {
        a.dump();
    }
}

void uniqueUse() {
    list<int> li = {1, 2, 1, 1, 1, 3, 4, 5, 5, 6, 6, 7, 9};
//    li.sort();
//    li.unique();
    li.unique([](int x, int y) -> bool {
        if (x == y && x % 2)
            return true;
        else
            return false;
    });
    printList(li);
}

void spliceUse() {
    list<int> li1 = {1, 3, 5, 7, 9};
    list<int> li2 = {2, 4, 6, 8, 10};
//    li1.splice(li1.begin(), li2);
//    li1.splice(li1.end(), li2, li2.begin());
    auto itr = li1.begin();
    advance(itr, 2);
    li1.splice(itr, li2, li2.begin(), li2.end());
    printList(li1);
    printList(li2);
}

void mergeUse() {
    list<int> li1 = {1, 3, 5, 7, 9};
    list<int> li2 = {2, 4, 6, 8, 10};
    li1.merge(li2);
    printList(li1);
}

int main() {
//    sortUse1();
//    sortUse2();
//    uniqueUse();
//    spliceUse();
    mergeUse();
    return 0;
}