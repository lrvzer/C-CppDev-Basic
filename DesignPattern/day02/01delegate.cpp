#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }
    ~A()
    {
        cout << "~A()" << endl;
    }
    void dis()
    {
        cout << "auto_ptr" << endl;
    }
};

void func()
{
    auto_ptr<A> ap(new A);
    ap->dis();
}

class SmartPointer
{
public:
    SmartPointer(A *pa) : _pa(pa) {}
    A *&operator->()
    {
        return _pa;
    }

    A &operator*() {
        return *_pa;
    }
    ~SmartPointer()
    {
        delete _pa;
    }

private:
    A *_pa;
};

int main()
{
    // func();

    SmartPointer sp(new A);
    sp->dis();
    (*sp).dis();
    return 0;
}