#include <iostream>

using namespace std;

class A
{
public:
    A(int i = 0)
    {
        _i = new int(i);
        cout << "A(int i = 0)" << endl;
    }

    A(const A &another)
    {
        _i = new int(*another._i);
        cout << "A(const A &another)" << endl;
    }

    A(A &&another)
    {
        _i = another._i;
        another._i = nullptr;
        cout << "A(A &&another)" << endl;
    }

    A &operator=(const A &another)
    {
        cout << "A &operator=(const A &another)" << endl;
        if (this != &another)
        {
            delete _i;
            _i = new int(*another._i);
        }
        return *this;
    }

    A &operator=(A &&another)
    {
        cout << "A &operator=(A &&another)" << endl;
        if (this != &another)
        {
            delete _i;
            _i = another._i;
            another._i = nullptr;
        }
        return *this;
    }

    ~A()
    {
        if (_i != nullptr)
            delete _i;
        cout << "~A()" << endl;
    }

protected:
    int *_i;
};

A func() {
    A a;
    return a;
}

int main()
{
    // A a;
    // A b = a;
    // A b(A(10));
    // A b;
    // b = std::move(a);
    
    // A && ra = func();
    // A ra = func();

    // A ra;
    // ra = func();

    func();
    return 0;
}