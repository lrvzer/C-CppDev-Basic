#include <iostream>

using namespace std;

enum Season {
    SPR, SUM, AUT, WIN
};

void func(int a) {
    cout << "void func(int a)" << endl;
}

void func(int *pa) {
    cout << "void func(int *pa)" << endl;
}

int main() {

    //================严格的类型检查==============//
    int b;
    const int a = 10;
//    int *pa = &a; // err
    const int *pa = &a;

//    char *cp = malloc(100); // err
    char *cp = (char *) malloc(100);

    int arr[2][3];
//    int **pArr = arr; // err
    int (*pArr)[3] = arr;

    //================bool类型==============//
    bool flag = true;
    cout << sizeof(flag) << endl; // 1


    //===============枚举===============//
    Season season = SUM;
//    season = 0; // err

    //===============可被赋值的表达式===============//
    int ia, ib =5;
    (ia = ib) = 10;
    cout << ia << " " << ib << endl; // 10 5

    //===============nullptr===============//
    // 区分NULL和0
    func(0);
    func(nullptr);
//    func(NULL); // err
    return 0;
}