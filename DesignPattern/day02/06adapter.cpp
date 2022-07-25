#include <iostream>

using namespace std;
/**
 * @brief 披着羊皮的狼
 *
 */

class Wolf
{
public:
    void howl()
    {
        cout << "我是一头正宗的Wolf" << endl;
    }
};

class Goat
{
public:
    virtual void miemie() = 0;
};

class NormalGoat : public Goat
{
public:
    void miemie()
    {
        cout << "我是一头正宗的Goat" << endl;
    }
};

class AdapterGoat : public Goat
{
public:
    AdapterGoat(Wolf *wf) : _wf(wf) {}
    void miemie()
    {
        _wf->howl();
    }

private:
    Wolf *_wf;
};

int main()
{
    NormalGoat ng;
    ng.miemie();

    Wolf wf;
    AdapterGoat ag(&wf);
    ag.miemie();
    return 0;
}