#include <iostream>

using namespace std;

// stack queue

class MyDeque
{
public:
    void push_back();
    void push_front();
    void pop_back();
    void pop_front();
};

class MyStack
{
public:
    void push()
    {
        md.push_back();
    }
    void pop()
    {
        md.pop_back();
    }

protected:
    MyDeque md;
};

class MyQueue
{
public:
    void enQueue()
    {
        md.push_back();
    }
    void deQueue()
    {
        md.pop_front();
    }

protected:
    MyDeque md;
};

int main()
{

    return 0;
}