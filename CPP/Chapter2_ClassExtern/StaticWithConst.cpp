#include <iostream>

using namespace std;

class A {
public:
    const static int dis() {
        cout << i << endl;
        return i;
    }

private:
    const static int i = 100;
};

int main() {
    A::dis();
    return 0;
}