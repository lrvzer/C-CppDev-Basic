#include <iostream>

using namespace std;

int divie(int x, int y)
{
    return x / y;
}

int main()
{
    auto div1 = bind(divie, 10, 3);
    cout << div1() << endl;

    auto div2 = bind(divie, 10, placeholders::_1);
    cout << div2(3) << endl;

    auto div3 = bind(divie, placeholders::_1, placeholders::_2);
    cout << div3(10, 5) << endl;    

    auto div4 = bind(divie, placeholders::_2, placeholders::_1);
    cout << div4(10, 5) << endl;   

    return 0;
}