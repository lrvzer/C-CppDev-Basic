#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, string, greater<int> > mis = {
        pair<int, string>(1, "abc"),
        pair<int, string>(2, "abc"),
        pair<int, string>(3, "abc"),
        pair<int, string>(4, "abc")
    };

    mis.insert(pair<int, string>(5, "ert"));
    mis.insert(map<int, string>::value_type(6, "ert"));
    mis.insert(make_pair<int, string>(7, "ggg"));
    mis[4] = "xxx";
    mis[100] = "yyy";

    map<int, string>::iterator itr;
    for (itr = mis.begin(); itr != mis.end(); ++itr) {
//        cout << itr->first << ":" << itr->second << endl;
        cout << (*itr).first << ":" << (*itr).second << endl;
    }

    return 0;
}