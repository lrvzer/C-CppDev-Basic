#include <iostream>

using namespace std;

// 实现共享用的

// 见new 见delete
// 见new 不见delete
// 不见new 见delete
// 不见new 不见delete

class Singleton {
    public:
        static Singleton *getInstance() {
            if (_ins == nullptr) {
                _ins = new Singleton;
            }
            return _ins;
        }

        static void releaseInstance() {
            if (_ins != nullptr) {
                delete _ins;
                _ins = nullptr;
            }
        }
    private:
        Singleton() {} // 此时不能通过常规的手段生成对象
        Singleton(const Singleton &another) {}
        Singleton &operator=(const Singleton &another) {}
        ~Singleton() {}
        static Singleton *_ins;
};

Singleton *Singleton::_ins = nullptr;

int main() {
    Singleton *ps1 = Singleton::getInstance();
    Singleton *ps2 = Singleton::getInstance();
    Singleton *ps3 = Singleton::getInstance();
    cout << ps1 << endl;
    cout << ps2 << endl;
    cout << ps3 << endl;

    Singleton::releaseInstance();

    return 0;
}
