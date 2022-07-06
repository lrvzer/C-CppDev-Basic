#include <stdio.h>

// 数组指针和一级指针的关系

int main(int argc, char *argv[]) {
    int arr[3][4] = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2};

    // arr  arr[1]   arr[1][1]
    // arr  *(arr+1) *(*(arr+1)+1)
//    printf("arr     = %p\tarr + 1    = %p\n", arr, arr + 1);
//    printf("arr[0]  = %p\tarr[0] + 1 = %p\n", arr[0], arr[0] + 1);
//    printf("%d\n", arr[1][1]);
//    printf("%d\n", (*(arr + 1))[1]);
//    printf("%d\n", *(*(arr + 1) + 1));

    printf("arr     = %p\tarr + 1     = %p\n", arr, arr + 1);
    printf("*arr    = %p\t*arr + 1    = %p\n", *arr, *arr + 1);
    printf("arr[0]  = %p\tarr[0] + 1  = %p\n", arr[0], arr[0] + 1);
    printf("&arr[0] = %p\t&arr[0] + 1 = %p\n", &arr[0], &arr[0] + 1);
    return 0;
}