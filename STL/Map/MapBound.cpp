#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, string> mis = {
        pair<int, string>(1, "a"),
        pair<int, string>(2, "abc"),
        pair<int, string>(3, "abcd"),
        pair<int, string>(4, "abcde"),
        pair<int, string>(5, "abcdef"),
        pair<int, string>(6, "abcdefg"),
        pair<int, string>(7, "abcdefgh"),
        pair<int, string>(8, "abcdefghi"),
        pair<int, string>(9, "abcdefghij"),
        pair<int, string>(10, "abcdefghijk")
    };

    // 下界
    auto lowItr = mis.lower_bound(5);
    // 上界
    auto upItr = mis.upper_bound(7);
    cout << "low: " << lowItr->first << " upper: " << upItr->first << endl;
//    for (auto itr = lowItr; itr != upItr;) {
//        itr = mis.erase(itr);
//    }
    mis.erase(lowItr, upItr);

    for (auto itr = mis.begin(); itr != mis.end(); ++itr) {
        cout << (*itr).first << ":" << (*itr).second << endl;
    }

    return 0;
}