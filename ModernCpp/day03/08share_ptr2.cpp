#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A() " << this << endl;
    }

    ~A()
    {
        cout << "~A() " << this << endl;
    }

    void dis()
    {
        cout << "A::dis()" << endl;
    }
};

void func(shared_ptr<A> &sp1) {
    cout << sp1.use_count() << endl;
}

int main()
{
    shared_ptr<A> sp1(new A);
    // shared_ptr<A> sp2(sp1);
    // shared_ptr<A> sp3(sp1);
    cout << sp1.use_count() << endl;
    func(sp1);

    // shared_ptr<A> spm = std::move(sp1);
    // cout << sp2.use_count() << endl;
    // cout << sp3.use_count() << endl;
    // cout << spm.use_count() << endl;
    return 0;
}

#if 0
void func(shared_ptr<A> sp)
{
    if (sp.unique()) {
        cout << "unique" << endl;
    }
    cout << sp.use_count() << endl;
}

int main()
{
    shared_ptr<A> sp(new A);
    cout << sp.use_count() << endl;
    if (sp.unique()) {
        cout << "unique" << endl;
    }
    func(sp);
    cout << sp.use_count() << endl;
    return 0;
}
#endif

#if 0
int main()
{
    {
        shared_ptr<A> sp(new A);
        cout << sp.use_count() << endl;
        sp.reset(); /*sp.reset();sp.reset();*/
        cout << sp.use_count() << endl;
        cout << "+++++++" << endl;
    }
    cout << "======" << endl;
    return 0;
}
#endif