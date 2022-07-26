#include <iostream>
using namespace std;

void func(auto_ptr<int> ap) {

}

int main() {

#if 0
    int * p = new int(10);
    {
        auto_ptr<int> ap(p);
        cout << *ap << endl;
    }

    auto_ptr<int> ap2(p);
    cout << *ap2 << endl;
#endif

    auto_ptr<int> ap(new int(100));
    cout << *ap << endl;
    func(ap);
    return 0;
}