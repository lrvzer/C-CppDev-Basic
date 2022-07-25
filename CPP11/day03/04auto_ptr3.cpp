#include <iostream>
#include <memory>
using namespace std;
class Copy
{
public:
    Copy(int i) : _i(new int(i))
    {
        cout << "Copy(int i)" << endl;
    }
    Copy(const Copy &another)
        : _i(new int(*another._i))
    {
        cout << "Copy(const Copy &another)" << endl;
    }
    ~Copy()
    {
        cout << "~Copy()" << endl;
    }
    void dis() {
        cout << "*_i = " << *_i << endl;
    }
    int *_i;
};

void func(auto_ptr<Copy> apc)
{
}

int main(int argc, char *argv[])
{
    auto_ptr<Copy> apc(new Copy(10));
    cout << *apc->_i << endl;
    func(apc);
    cout << "==========" << endl;
    cout << *apc->_i << endl;
    return 0;
}