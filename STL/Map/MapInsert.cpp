#include <iostream>
#include <map>

using namespace std;

int main() {

//    map<int, string, less<int> > mis = {
    multimap<int, string, less<int> > mis = {
        pair<int, string>(1, "abc"),
        pair<int, string>(2, "abc"),
        pair<int, string>(3, "abc"),
        pair<int, string>(4, "abc")
    };
    mis.insert(mis.find(100), pair<int, string> (100, "ddd"));
    mis.insert(mis.find(100), pair<int, string> (100, "ddd"));
    mis.insert(mis.find(100), pair<int, string> (100, "ddd"));

    mis.erase(100);
    auto itra = mis.find(1000);
    if (itra != mis.end()) {
        mis.erase(itra);
    }

    map<int, string>::iterator itr;
    for (itr = mis.begin(); itr != mis.end(); ++itr) {
//        cout << itr->first << ":" << itr->second << endl;
        cout << (*itr).first << ":" << (*itr).second << endl;
    }

    return 0;
}