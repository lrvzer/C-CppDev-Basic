#include <iostream>

using namespace std;

class Phone
{
public:
    virtual int cost() = 0;
};

class Nokia : public Phone
{
public:
    int cost()
    {
        return 5000;
    }
};

class DecoratePhone : public Phone
{
public:
    DecoratePhone(Phone *ph) : phone(ph) {}

protected:
    Phone *phone;
};

class ScreenProtectorPhone : public DecoratePhone
{
public:
    ScreenProtectorPhone(Phone *phone) : DecoratePhone(phone) {}
    int cost()
    {
        return 100 + phone->cost();
    }
};

class HeadSetPhone : public DecoratePhone
{
public:
    HeadSetPhone(Phone *phone) : DecoratePhone(phone) {}
    int cost()
    {
        return 200 + phone->cost();
    }
};

int main()
{
    Nokia nokia;
    cout << nokia.cost() << endl;

    // ScreenProtectorPhone sp(&nokia);
    // cout <<  sp.cost() << endl;

    // HeadSetPhone sp2(&nokia);
    // cout <<  sp2.cost() << endl;

    Phone *p = new HeadSetPhone(new HeadSetPhone(new ScreenProtectorPhone(new ScreenProtectorPhone(new Nokia))));
    cout << p->cost() << endl;
    return 0;
}