#include <iostream>

using namespace std;


void printArray(int (&arr)[10], int size) {
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
}

#if 1
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
//    int * const & parr = arr;
//    for (int i = 0; i < 10; i++) {
//        cout << parr[i] << '\t';
//    }
//    cout << endl;
//
//    int (&rarr)[10] = arr;
//    for (int i = 0; i < 10; i++) {
//        cout << rarr[i] << '\t';
//    }
//    cout << endl;
//
//    cout << "sizeof(arr) = " << sizeof(arr) << "\tsizeof(rarr) = " << sizeof(rarr);

    printArray(arr, sizeof(int));

}
#endif


#if 0
// 指针的数组有，引用的数组无
int main() {
    int a, b, c;
    int *p[] = {&a, &b, &c}; //  int *  int **

//    int & r[] = {a, b, c}; // int &  int & *

}
#endif


#if 0
// 指针的指针有，引用的引用无 // 可以对引用再次取引用，平行关系
int main() {
    int * p;
    int **pp = &p;
    int ***ppp = &pp;


    int a;
    int & ra = a;
    int & rra = ra;

    //  int & & rrra = ra;

}
#endif


#if 0
// 指针的引用有，引用的的指针无
// 指针的本质，是对指针的包装，避免使用裸露的指针
// 对于引用的指针类型，C++避免对引用再次开封

void mySwap(char * & rp, char * & rq) {
    char * t = rp;
    rp = rq;
    rq = t;
}

void refPointer() {
    int a;
    int *p = &a; int * &pr = p;
    int & ra = a;
    // int & * rpa = &ra; // error
}


int main() {

    char * p = "canada";
    char * q = "china";

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    mySwap(p, q);
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    return 0;
}
#endif