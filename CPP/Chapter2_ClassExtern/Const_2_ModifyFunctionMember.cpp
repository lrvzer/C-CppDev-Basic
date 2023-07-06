#include <iostream>

using namespace std;

/* const
 1.修饰类数据成员
      必须要初始化：一种类内初始化，一种初始化列表初始化；一经初始化，不可更改
      可被普通成员函数和常成员函数使用
 2.修饰类成员函数
      修饰位置：
        class A {
            void foo() const; //类内定义
            void func() const {
            }
        };

        void A::foo() const { // 类外声明仍然需要const修饰符
        }

      const修饰的函数内部不会发生改变数据成员的行为，且函数内部只能调用const修饰的成员函数

 3.修饰类对象
      修饰类成员函数构成的重载函数时：
        non-const object，优先调用non-const版本；const object只能调用const版本
        当成员函数的const和non-const版本同时存在时，
            const object只会（只能）调用const版本
            non-const object只会（只能）调用non-const版本
*/

class A {
    public:
        A(int x, int y) : _x(x), _y(y) {}

//        void func() { // error
        void func() const{
            cout << _x << _y << endl;
        }

//        void foo() {
//            cout << "void foo()" << endl;
//            cout << _x << _y << endl;
//        }

        // 函数内部只能调用const修饰的成员函数
        void foo() const {
//            _x = 100; // error
            cout << "void foo() const" << endl;
            cout << _x << _y << endl;
//            func(); // func函数必须以const修饰
        }
    private:
        int _x;
        int _y;
};

int main() {
    A a(4, 5);
//    const A a(4, 5);
    a.foo();
    return 0;
}