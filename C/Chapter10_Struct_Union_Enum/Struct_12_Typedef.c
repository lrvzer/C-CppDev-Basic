#include <stdio.h>

// typedef	typedefine	typename
// typedef 只能对已有类型取别名，不能创造新的类型

typedef char int8;
typedef short int16;
typedef int int32;
typedef long long int64;

// 定义数组类型
typedef int ARRAY[10];

// 定义指针类型
typedef char *pChar;

#define DpChar char *


// typedef 构成的C语言语句参与编译
// #define 构成的语句，在预处理阶段完毕

int main(int argc, char *argv[]) {

    int8 i8;
    int16 i16;
    int32 i32;
    int64 i64;

    int arr[10];
    printf("sizeof(arr) = %lu \t sizeof(int[10]) = %lu\n", sizeof(arr), sizeof(int[10]));

    /*
     int arr[10];  // 1.用现有类型生成变量
     typedef int arr[10];  // 2.在变量定义之前家typedef
     typedef int ARRAY[10];  // 3.将定义的变量换成别名
     */


    ARRAY array;
    printf("sizeof(ARRAY) = %lu \t sizeof(array) = %lu\n", sizeof(ARRAY), sizeof(array));

    for (int i = 0; i < 10; i++) {
        array[i] = i;
        printf("%d\n", array[i]);
    }

    char *p, q;
    printf("sizeof(p) = %lu,\tsizeof(q) = %lu\n", sizeof(p), sizeof(q));

    pChar x, y;
    printf("sizeof(x) = %lu,\tsizeof(y) = %lu\n", sizeof(x), sizeof(y));

    DpChar m, n;
    printf("sizeof(m) = %lu,\tsizeof(n) = %lu\n", sizeof(m), sizeof(n));

    return 0;
}

/*
 * 新类型名一般用大写表示，以便于区别。
 * 用typedef只能声明新的类型名，不能创造新的类型，只是为已经存在的类型起一个别名，也不能用来定义变量，即只能用其声明的类型来定义变量；
 * 有时也可用宏定义来代替typedef的功能，但是宏定义是由预处理完成的，而typedef则是在编译时完成的，更为灵活方便
 * typedef可以让类型更见名知意，更便于移值。
 */