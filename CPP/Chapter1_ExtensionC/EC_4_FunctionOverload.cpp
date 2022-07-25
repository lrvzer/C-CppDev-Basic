#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}
int main() {
    cout << add(10, 11) << endl;
    cout << add(10.1, 10.2) << endl;
    return 0;
}
