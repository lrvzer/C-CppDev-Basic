#include <iostream>
#include "myString.h"

using namespace std;
/**
 * 命令倾轧（Name Mangling）
 * nm EC_5_NameMangling
 * @return
 */

int main() {
    const char *pa = "China";
    int len = my_strlen(pa); // _my_strlen
    my_str(pa); // __Z6my_strPKc
    cout << len << endl;
    return 0;
}