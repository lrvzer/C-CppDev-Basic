#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main() {
    Value obj;
    obj["name"] = "zhangSan";
    obj["sex"] = true;
    obj["age"] = 11;

    Value objChild;
    objChild["birth"] = "1999-9-9";
    objChild["address"] = "BeiTing";
    obj["other"] = objChild;

    cout << obj.toStyledString();
    return 0;
}
