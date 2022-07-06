#include <iostream>
#include <fstream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main() {
    fstream fs("my.json", ios::in);
    if (!fs)
        cout << "open error" << endl;

    Value obj;
    Reader reader;
    if (reader.parse(fs, obj)) {
        cout << obj["FirstName"].asCString() << endl;
        cout << obj["LastName"].asCString() << endl;
        cout << obj["Age"].asInt() << endl;

        cout << obj["address"]["City"] << endl;
        cout << obj["address"]["Country"] << endl;
        cout << obj["address"]["Street"] << endl;

        for (int i = 0; i < obj["Phone numbers"].size(); ++i) {
            cout << obj["Phone numbers"][i] << endl;
        }
    }

    return 0;
}