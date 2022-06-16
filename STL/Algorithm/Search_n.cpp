#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

template<class Cont, class Size, class T>
bool consecutive_values(const Cont &c, Size count, const T &v) {
    return search_n(begin(c), end(c), count, v)!= end(c);
}

int main() {
    const char sequence[] = "1001010100010101001010101";
    cout << boolalpha;
    cout << "Has 4 consecutive zeros: "
         << consecutive_values(sequence, 4, '0') << endl;
    cout << "Has 3 consecutive zeros: "
         << consecutive_values(sequence, 3, '0') << endl;
    return 0;
}