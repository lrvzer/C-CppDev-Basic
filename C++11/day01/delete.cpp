#include <iostream>

using namespace std;

class Singleton {
    public:
        static Singleton * getInstance() {
            if (nullptr == _ins) {
                _ins = new Singleton;
            }
            return _ins;
        }

        // static void releaseInstance() {
        //     if (nullptr != _ins)
        //         delete _ins;
        //     _ins = nullptr;
        // }

        Singleton() = default;
        ~Singleton() = delete;
        Singleton(const Singleton &anoter) = delete;

    private:
        static Singleton * _ins;
};

Singleton * Singleton::_ins = nullptr;

int main() {
    Singleton * p = Singleton::getInstance();
    // delete p; // error
    return 0;
}