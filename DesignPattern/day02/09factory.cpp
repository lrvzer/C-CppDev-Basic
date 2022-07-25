#include <iostream>

using namespace std;

enum CpuType
{
    CoreA,
    CoreB
};

class Cpu
{
public:
    virtual void work() = 0;
};

class SingeCoreA : public Cpu
{
public:
    void work()
    {
        cout << "SingeCoreA work" << endl;
    }
};

class SingeCoreB : public Cpu
{
public:
    void work()
    {
        cout << "SingeCoreB work" << endl;
    }
};

class Factory
{
public:
    Cpu *create(CpuType type)
    {
        if (type == CoreA)
        {
            return new SingeCoreA;
        }
        else if (type == CoreB)
        {
            return new SingeCoreB;
        }
        return nullptr;
    }
};

int main()
{
    Factory fac;
    Cpu *pCpu = fac.create(CoreA);
    pCpu->work();

    pCpu = fac.create(CoreB);
    pCpu->work();
    return 0;
}