#include <iostream>

using namespace std;

// 智能指针
// 自实现智能指针：重载operator-> / operator*

class A {
    public:
        A() {
            cout << "A()" << endl;
        }

        ~A() {
            cout << "~A()" << endl;
        }

        void func() {
            cout << "void func()" << endl;
        }
};

template<typename T>
class my_auto_ptr {
    public:
        my_auto_ptr(T *t = 0) : _t(t) {}

        // pointer
        T *operator->() {
            return _t;
        }

        // reference
        T &operator*() {
            return *_t;
        }

        ~my_auto_ptr() {
            delete _t;
        }

    private:
        T *_t;
};

int main() {
//    auto_ptr<A> p(new A);
//    p->func();
//    (*p).func();

    my_auto_ptr<A> mp(new A);
    mp->func();
    (*mp).func();

    return 0;
}