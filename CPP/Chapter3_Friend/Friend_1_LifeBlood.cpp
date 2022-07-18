#include <iostream>
using namespace std;

// friend 友元，解决效率问题
// get和set方法是标准封装的结果；friend破坏了这种封装，但又带来效率的提高

class Sprite {
    public:
        friend void fight(Sprite &sp);

        Sprite(int lb = 100) : _lifeBlood(lb) {

        }

        int getLifeBlood() {
            return _lifeBlood;
        }

        void setLifeBlood(int lb) {
            _lifeBlood = lb;
        }

    private:
        int _lifeBlood;

};

int main() {

    Sprite sp;
    fight(sp);
    return 0;
}

void fight(Sprite &sprite) {
//    sprite.setLifeBlood(sprite.getLifeBlood() - 20);
//    cout << sprite.getLifeBlood() << endl;

    sprite._lifeBlood = sprite._lifeBlood - 20;
    cout << sprite._lifeBlood << endl;
}
