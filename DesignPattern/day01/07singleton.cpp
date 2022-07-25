#include <iostream>

using namespace std;

class Singleton
{
public:
    static Singleton *getInstance()
    {
        if (_ins == nullptr)
        {
            _ins = new Singleton;
        }
        return _ins;
    }

private:
    static Singleton *_ins;
    Singleton() {}
    Singleton(const Singleton &another) {}
    Singleton &operator=(const Singleton &another) {}
    ~Singleton() {}
};

Singleton *Singleton::_ins = nullptr;

int main()
{
    Singleton *ps1 = Singleton::getInstance();
    Singleton *ps2 = Singleton::getInstance();
    if (ps1 == ps2)
    {
        cout << "ps1 == ps2" << endl;
    }
    else
    {
        cout << "ps1 != ps2" << endl;
    }
    return 0;
}