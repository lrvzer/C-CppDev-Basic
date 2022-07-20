#include <iostream>

using namespace std;

/*
 由于友元函数并非类成员，因引不能被继承，在某种需求下，可能希望派生类的友元 函数能够使用基类中的友元函数。
 为此可以通过强制类型转换，将派生类的指针或是引用 强转为其父类的引用或是指针，然后使用转换后的引用或是指针来调用基类中的友元函数。
 */
class Student {
        friend ostream &operator<<(ostream &out, Student &stu) {
            out << stu.a << endl;
            out << stu.b << endl;
            return out;
        }
    public:
        Student(int i, int j) : a(i), b(j) {
            cout << "Student(int i, int j)" << endl;
        }
        ~Student() {
            cout << "~Student()" << endl;
        }
    private:
        int a;
        int b;
};

class Graduate : public Student {
        friend ostream &operator<<(ostream &out, Graduate &gra) {
//            out << (Student&)gra;
            out << static_cast<Student &>(gra);
            out << gra.c << endl;
            return out;
        }
    public:
        Graduate(int i, int j, int k) : Student(i, j), c(k) {
            cout << "Graduate(int i, int j, int k)" << endl;
        }
        ~Graduate() {
            cout << "~Graduate()" << endl;
        }
    private:
        int c;
};

int main() {
    Graduate g(1, 2, 3);
    cout << g << endl;
    return 0;
}