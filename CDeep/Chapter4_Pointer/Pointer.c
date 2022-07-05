#include <stdio.h>
#include <stdlib.h>


// 指针的本质，有类型的地址
// 指针变量
// int * p; 声明指针、指定大小、类型决定寻址能力

// 指针运算

// & * 一级指针(数组名)到数组指针之间的切换

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr1 = (int *) (&a + 1);
    int *ptr2 = (int *) ((int) a + 1);
    printf("%d, %x", ptr1[-1], *ptr2);
    return 0;
}

int main5() {
    int arr[5];
    printf("arr     = %p\n", arr);
    printf("arr+1   = %p\n", arr + 1);

    printf("&arr    = %p\n", &arr);
    printf("&arr+1  = %p\n", &arr + 1);

    printf("*&arr   = %p\n", *&arr);
    printf("*&arr+1 = %p\n", *&arr + 1);

    return 0;
}

int main4() {
    int *p = (int *) 0x0001;
    printf("p   = %p\n", p);
    printf("p+1 = %d\n", (int) p + 1);

    int a = 0x0001;
    printf("a   = %x\n", a);
    printf("a+1 = %x\n", a + 1);
    return 0;
}

int main3(int argc, char *argv[]) {
    int *p = (int *) 0x0001;
    printf("%p\n", p);

//	int *q = p + 5;
    int *q = (int *) ((int) p + 20);
    printf("%p\n", q);

    printf("p - q = %lu\n", p - q);
    printf("q - p = %lu\n", q - p);

    printf("p - q = %d\n", (int) p - (int) q);
    printf("q - p = %d\n", (int) q - (int) p);
    return 0;
}

int main2(int argc, char *argv[]) {
    int data = 0x12345678;

    printf("%p\n", &data);

    int *p = &data;

    printf("%#x\n", *&data);
    printf("%#x\n", *p);

    return 0;
}

int main1(int argc, char *argv[]) {
    char *p;
    printf("%lu\n", sizeof(p));

    char *pp = malloc(100);
    printf("%lu\n", sizeof(pp));

    struct Stu {
        char name[1024];
        int age;
    } *ppp;
    printf("%lu\n", sizeof(ppp));

    int (*pppp)[1024];
    printf("%lu\n", sizeof(pppp));
    return 0;
}