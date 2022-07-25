#include <iostream>

using namespace std;

class A
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};

class B
{
public:
    int add(int a, int b)
    {
        return a - b;
    }
};

int main()
{

    A a;
    B b;
    cout << a.add(2, 3) << endl;
    cout << b.add(2, 3) << endl;
    return 0;
}