#include <iostream>

using namespace std;

class B
{
public:
    void yy();
};

class A
{
public:
    void xx(B &rb, B *pb, B b)
    {
        rb.yy();
        pb->yy();
        b.yy();
    }

private:
    // B &rb;
    // B *pb;
    // B b;
};

int main()
{
    return 0;
}