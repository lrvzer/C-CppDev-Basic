#include <stdio.h>

/*
 所谓变长数组，就是运行开始时，有一次改变大小的机会；
 在其后的运行期间不可以改变大小，且变长数组不可以初始化
 */

int main(int argc, char *argv[]) {
    int var = 100;
    scanf("%d", &var);
    printf("var = %d\n", var);
    int arr[var];

    // VLA不可被初始化
//	int arr2[var] = {1, 2, 3, 4}; // error: variable-sized object may not be initiablized

    printf("sizeof(arr) = %lu\n", sizeof(arr));
    var = 200;
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    return 0;
}