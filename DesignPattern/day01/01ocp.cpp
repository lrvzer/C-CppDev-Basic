#include <iostream>

using namespace std;

class IReader
{
public:
    virtual string getContents() = 0;
};

class Book : public IReader
{
public:
    virtual string getContents()
    {
        return "hello book";
    }
};

class Paper : public IReader
{
public:
    virtual string getContents()
    {
        return "hello paper";
    }
};

class Mother
{
public:
    void tellStory(IReader *read)
    {
        cout << read->getContents() << endl;
    }
};

int main()
{
    Book b;
    Paper p;
    Mother m;
    m.tellStory(&b);
    m.tellStory(&p);
    return 0;
}