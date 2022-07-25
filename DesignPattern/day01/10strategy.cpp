#include <iostream>

using namespace std;

class Weapon
{
public:
    virtual void use() = 0;
};

class Knife : public Weapon
{
public:
    virtual void use()
    {
        cout << "Knife" << endl;
    }
};

class Gun : public Weapon
{
public:
    virtual void use()
    {
        cout << "Gun" << endl;
    }
};

class Sprite
{
public:
    Sprite(Weapon *wp) {
        _wp = wp;
    }
    void setWeapon(Weapon *wp)
    {
        _wp = wp;
    }

    void fight()
    {
        _wp->use();
    }

private:
    Weapon *_wp;
};

int main()
{
    Knife k;
    Gun g;

    Sprite sp(&k);
    sp.fight();

    sp.setWeapon(&g);
    sp.fight();
    
    return 0;
}