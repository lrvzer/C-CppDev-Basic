#include <iostream>
#include <list>

using namespace std;

struct MyTime
{
    int _hour;
    int _min;
    int _sec;
};

class Observer
{
public:
    Observer() {}
    virtual void update(MyTime &t) = 0;
    virtual void dis()
    {
        cout << "Hour: " << _t._hour << " Min : " << _t._min << " Sec : " << _t._sec << endl;
    }

protected:
    MyTime _t;
};

class LondonTime : public Observer
{
public:
    LondonTime() {}
    virtual void update(MyTime &t)
    {
        _t = t;
        cout << "LondonTime ";
        dis();
    }
};

class CanadaTime : public Observer
{
public:
    CanadaTime() {}
    virtual void update(MyTime &t)
    {
        _t = t;
        cout << "CanadaTime ";
        dis();
    }
};

class Subject
{
public:
    Subject() {}
    virtual void registerObserver(Observer *ob) // 订阅
    {
        lo.push_back(ob);
    }
    virtual void removeObserver(Observer *ob) // 取消订阅
    {
        lo.remove(ob);
    }
    virtual void notify() = 0;

protected:
    list<Observer *> lo;
};

class BeijingTime : public Subject
{
public:
    BeijingTime() {}
    virtual void notify()
    {
        list<Observer *>::iterator itr;
        for (itr = lo.begin(); itr != lo.end(); ++itr)
        {
            (*itr)->update(_t);
        }
    }
    void setTime(MyTime t)
    {
        _t = t;
        notify();
    }

private:
    MyTime _t;
};

int main()
{
    LondonTime lt;
    CanadaTime ct;

    BeijingTime bt;
    bt.registerObserver(&lt);
    bt.registerObserver(&ct);
    bt.setTime(MyTime{100, 200, 300});

    cout << "========" << endl;

    bt.removeObserver(&ct);
    bt.setTime(MyTime{2, 3, 4});

    return 0;
}