#include <iostream>

using namespace std;

class A {
    public:
        A() {
            cout << "A()" << endl;
        }

        void dis() {
            cout << "dis() " << _x << ":" << _y << endl;
        }

        void *operator new(size_t size) {
            cout << "void * operator new(size_t) " << size << endl;

            void *pa = malloc(size);
            ((A *) pa)->_x = 100;
            ((A *) pa)->_y = 200;
            cout << pa << endl;
            return pa;

        }

        void operator delete(void *p) {
            cout << "void operator delete(void *p)" << p << endl;
            free(p);
        }

        void *operator new[](size_t size) {
            cout << size << endl;
            void *p = malloc(size);
            return p;
        }

        void operator delete[](void *p) {
            free(p);
        }

        ~A() {
            cout << "~A()" << endl;
        }
    private:
        int _x;
        int _y;
};

int main() {

//    A * pa = new A;
//    pa->dis();
//    delete pa;

    A *pa = new A[10];
    delete[] pa;
    return 0;
}
