#include <iostream>

using namespace std;

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
    virtual Cpu *createCpu() = 0;
};

class FactoryA : public Factory
{
public:
    Cpu *createCpu()
    {
        return new SingeCoreA;
    }
};

class FactoryB : public Factory
{
public:
    Cpu *createCpu()
    {
        return new SingeCoreB;
    }
};

int main()
{
    FactoryA fa;
    Cpu *pCpu = fa.createCpu();
    pCpu->work();


    FactoryB fb;
    pCpu = fb.createCpu();
    pCpu->work();
    return 0;
}