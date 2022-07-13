#include <iostream>

using namespace std;

class Stu {
    public:
        Stu(string n = "") : _name(n) {}
        void dis() {
            cout << _name << endl;
        }
    private:
        string _name;
};

int main() {

//    Stu s("zhangsan");
//    Stu sa[100] = {Stu("lisi")};
    Stu *ps = new Stu;
    Stu *pa = new Stu[1024];

    delete ps;
    delete pa;
    return 0;
}
