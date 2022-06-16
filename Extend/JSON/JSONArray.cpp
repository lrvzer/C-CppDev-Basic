#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main() {

    Value array;

    for (int i = 0; i < 10; ++i) {
        array.append(i);
    }

    Value obj;
    obj["k"] = "v";
    array.append(obj);

    cout << array.toStyledString() << endl;

    return 0;
}
