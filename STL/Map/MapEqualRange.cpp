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

//    auto range = mis.equal_range(5);
    pair<map<int, string>::iterator, map<int, string>::iterator> range = mis.equal_range(5);
    cout << "low first: " << range.first->first << " second: " << range.first->second << endl;
    cout << "upper first: " << range.second->first << " second: " << range.second->second << endl;
    return 0;
}