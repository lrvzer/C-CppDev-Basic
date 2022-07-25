#include <iostream>

using namespace std;

class Tool
{
public:
    virtual void userTool() = 0;
};

class Boat : public Tool
{
public:
    virtual void userTool()
    {
        cout << "Boat Boat Boat" << endl;
    }
};

class Plane : public Tool
{
public:
    virtual void userTool()
    {
        cout << "Plane Plane Plane" << endl;
    }
};

class Person
{
public:
    void traverse(Tool *t)
    {
        t->userTool();
    }
};

int main()
{
    Person wgl;
    Boat b;
    Plane p;

    wgl.traverse(&p);
    return 0;
}