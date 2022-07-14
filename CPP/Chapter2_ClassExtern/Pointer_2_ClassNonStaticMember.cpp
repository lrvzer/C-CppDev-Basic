#include <iostream>

using namespace std;
// 定义一个指针，指向类的成员，不是指向对象的成员

class Student {
    public:
        Student(string n, int nu) : name(n), num(nu) {}
        void dis(int idx) {
            cout << "idx:" << idx << " name " << name << " number " << num << endl;
        }
        string name;
        int num;
};

int main() {

    Student s("zhangSan", 12);
    Student *ps = &s;
    string Student::*pName = &Student::name;
    cout << s.*pName << endl;
    cout << ps->*pName << endl;

    void (Student::*pf)(int) = &Student::dis;
    (s.*pf)(1);
    (ps->*pf)(2);

    return 0;
}