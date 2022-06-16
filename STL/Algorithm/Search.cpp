#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename Container>
bool inQuote(const Container &cont, const string &s) {
    return
        search(cont.begin(), cont.end(), s.begin(), s.end())
            != cont.end();
}

int main() {
    string str =
        "why waste time learning, when ignorance is instantaneous?";
    cout << boolalpha << inQuote(str, "learning") << '\n'
         << inQuote(str, "lemming") << '\n';

    vector<char> vec(str.begin(), str.end());
    cout << boolalpha << inQuote(vec, "learning") << '\n'
         << inQuote(vec, "lemming") << '\n';
    return 0;
}