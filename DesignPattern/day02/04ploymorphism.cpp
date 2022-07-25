#include <iostream>

using namespace std;

class Father
{
public:
    void test()
    {
        cout << "Father test" << endl;
    }
};

class Son : public Father
{
public:
    void test()
    {
        Father::test();
        cout << "son test" << endl;
    }
};

int main()
{
    Father *pf = new Son;
    pf->test();
    return 0;
}