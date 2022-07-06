#include <iostream>
#include <fstream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main() {
    Value obj;
    obj["FirstName"] = "John";
    obj["LastName"] = "Doe";
    obj["Age"] = 43;

    Value address;
    address["Street"] = "Downing Street 10";
    address["City"] = "London";
    address["Country"] = "Great Britain";

    Value phoneArr;
    phoneArr.append("+44 1234567");
    phoneArr.append("+44 2345678");

    obj["address"] = address;
    obj["Phone numbers"] = phoneArr;

//    cout << obj.toStyledString();

//    fstream fs("my.json", ios::out);
//    fs << obj;
//    fs.close();

    FastWriter fw;
    string s = fw.write(obj);
    cout << s << endl;

    StyledWriter sw;
    string s2 = sw.write(obj);
    cout << s2 << endl;

    return 0;
}