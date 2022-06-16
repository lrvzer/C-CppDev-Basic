#include    <functional>
#include    <algorithm>
#include    <vector>
#include    <iostream>
#include    <string>

using namespace std;
using namespace std::placeholders;

class Person {
    private:
        string name;
    public:
        Person(const string &n) : name(n) {
        }
        void print() const {
            cout << name << endl;
        }
        void print2(const string &prefix) const {
            cout << prefix << name << endl;
        }
};
int main() {
    Person p("abc");
    auto mem = bind(&Person::print, p);
    mem();
#if 1
    vector<Person> vp = {
        Person("Tick"),
        Person("Trick"),
        Person("Track")
    };
    for_each(vp.begin(), vp.end(),
             bind(&Person::print, _1));
    cout << endl;
    for_each(vp.begin(), vp.end(),
             bind(&Person::print2, _1, "Person:    "));
    cout << endl;
    bind(&Person::print2, _1, "This is: ")(Person("nico"));
#endif
    return 0;
}