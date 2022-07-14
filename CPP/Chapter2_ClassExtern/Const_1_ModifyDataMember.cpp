#include <iostream>

using namespace std;

/* const
 1.修饰类数据成员
      必须要初始化：一种类内初始化（不推荐），一种初始化列表初始化；一经初始化，不可更改
      可被普通成员函数和常成员函数使用
*/

// initial list 一方面，效率的问题，为了一些新扩展的功能，提供一个解决场所或是办法
// const 修饰的数据成员，可以在非const函数中使用，但是不可以更改
class A {
    private:
        const int x; // const int x = 100; 该初始化方法不推荐
        int y;
        int &z;
    public:
//        A(int &zz) : x(100), y(200), z(zz) {
        A(int xx, int &zz) : x(xx), y(200), z(zz) {
            cout << x << endl;
            cout << z << endl;
        }
        void dis() {
            cout << y << endl;
            cout << z << endl;
        }
};

int main() {
    int z = 400;
    A a(100, z);
    a.dis();
    return 0;
}
