#include <iostream>

using namespace std;
// protected
// 在外部访问的时候，等价于private
// 在public继承中，protected修饰的成员子类可见

// 继承方式，不影响派生类成员的访问方式，影响了父类的成员，在子类内部和对象访问权限

// 父类   public      protected       private
// 子类   public      protected       不可见

class A {
    public:
        void test() {
            cout << "test" << endl;
        }
        int pub;
    protected:
        int pro;
    private:
        int pri;
};

class B : public A {
    public:
        void func() {
            cout << pub << endl;
            cout << pro << endl;
//            cout << pri << endl; // err
        }
        int pubb;
    protected:
        int prob;
    private:
        int prib;
};

class C : public B {
    public:
        void func() {
            cout << pub << endl;
            cout << pro << endl;
        }
};

int main() {

    B b;
    b.test();

    C c;
    c.func();
//    c.test(); // err

//    b.pub;
//    b.pubb;
//    b.prob; // err

//    cout << sizeof(A) << endl;
//    cout << sizeof(B) << endl;

    return 0;
}
