#include <iostream>

using namespace std;

// 1.引用是一种生命关系  不开辟空间，必须要初始化，不能单独存在，与被别名的变量拥有相同数据类型
// 2.声明关系，一旦确定，不可变更
// 3.可以对引用再次引用，也就是对一个变量，可以建立多个引用，此时引用间是种平行关系


// 传引用等价于传作用域，把一个变量以引用的方式传到另外一个作用域，就等价于扩展了该变量的作用域
int mySwap(int &ra, int &rb) {
    int t = ra;
    ra = rb;
    rb = t;
}

int main() {
    int a = 100;
    int &ra = a;
    cout << "a = " << a << endl;
    cout << "ra = " << ra << endl;
    cout << "&a = " << &a << endl;
    cout << "&ra = " << &ra << endl;
    return 0;
}
