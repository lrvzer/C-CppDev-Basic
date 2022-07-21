#include <iostream>

using namespace std;

class Animal {
    public:
        Animal() {
            cout << "Animal::Animal()" << endl;
        }
//        ~Animal() {
        virtual ~Animal() {
            cout << "Animal::~Animal()" << endl;
        }
        virtual void voice() = 0;
};

class Cat : public Animal {
    public:
        Cat() {
            cout << "Cat::Cat()" << endl;
        }
//        ~Cat() {
        virtual ~Cat() {
            cout << "Cat::~Cat()" << endl;
        }
        virtual void voice() override {
            cout << "Cat::voice()" << endl;
        }
};

int main() {
    Animal *ps = new Cat;
    ps->voice();
    delete ps;
    return 0;
}