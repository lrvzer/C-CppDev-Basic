#include <iostream>

using namespace std;

/*
this特性
1 指向当前对象，可用于用所有的成员函数，但不能应用于初始化列表。
2 this 是以隐含参数的形式传入，而非成员的一部分，所以不会影响 sizeof（obj）的大小。
3 this 指针本身是不能更改指向的，即是const类型修饰的。

作用
1 指向当前对象，避免入参与成员名相同
2 支持基于返回this引用的多重串联调用的函数（连续赋值）。
 */

class Stu {
    public:
        Stu(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void dis() {
            cout << "name: " + this->name + " age: " << this->age << endl;
        }

        Stu &growUp() {
            this->age++;
            return *this;
        }

    private:
        string name;
        int age;
};

int main() {
    Stu s("zhangSan", 10);
    s.dis();
    s.growUp().growUp().growUp();
    s.dis();
    return 0;
}