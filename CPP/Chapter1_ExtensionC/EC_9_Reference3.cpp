#include <iostream>

using namespace std;

int main() {

    const int a = 10;
    const int & ra = a;

    int b = 100;
    int c = 101;
    int & rb = b;
    rb = c;
    cout << rb << endl;
    const int & crb = b;

    return 0;
}
