#include <stdio.h>

typedef struct _structTest {
    char a;
    short b;
    int c;
} MyStruct;

typedef union _unionTest {
    char a;
    short b;
    int c;
} MyUnion;

// 大小
// 对于结构体而言，如果不考虑内存对其，其大小就是所有元素大小之和
// 对于共用体而言，其大小，就是最大元素所占用的空间的大小

// 成员地址
// 对于结构体而言，每一个成员均有自己独立的地址
// 对于共用体而言，所有成员独有一个地址

int main(int argc, char *argv[]) {
    MyStruct ms;
    MyUnion mu;
    mu.c = 0x12345678;

    printf("sizeof(MyStruct) = %lu\n", sizeof(MyStruct));
    printf("sizeof(MyUnion) = %lu\n", sizeof(MyUnion));

    printf("%p %p %p\n", &ms.a, &ms.b, &ms.c);
    printf("%p %p %p", &mu.a, &mu.b, &mu.c);
    puts("");
    printf("%x %x %x", mu.a, mu.b, mu.c);
    return 0;
}