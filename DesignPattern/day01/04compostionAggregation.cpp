#include <iostream>
#include <vector>

using namespace std;

class Wing
{
public:
    Wing()
    {
        cout << "wing create" << endl;
    }

    ~Wing()
    {
        cout << "wing destory" << endl;
    }
};

class Bird
{
public:
    Bird()
    {
        left = new Wing;
        right = new Wing;
    }

    ~Bird()
    {
        delete left;
        delete right;
    }

private:
    Wing *left;
    Wing *right;
};

class Flork
{
public:
    void flyIn(Bird *b)
    {
        vb.push_back(b);
    }

    Bird *flyOut()
    {
        Bird *b = vb.back();
        vb.pop_back();
        return b;
    }

private:
    vector<Bird *> vb;
};

int main()
{
    Bird *b1 = new Bird;
    Bird *b2 = new Bird;
    Bird *b3 = new Bird;

    Flork f;
    f.flyIn(b1);
    f.flyIn(b2);
    f.flyIn(b3);
    return 0;
}