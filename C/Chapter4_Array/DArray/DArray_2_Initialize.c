#include <stdio.h>

/* 初始化
未初始化
	int arr[3][4]；

满初始化
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

部分初始化（行部分初始化/整体）
	int arr[3][4] = {
		{1, 2},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int arr[3][4] = {
		1, 2,
		5, 6, 7, 8,
		9, 10, 11, 12
	};
		
越界	
 */
int main(int argc, char *argv[]) {

    // int      a[] = {1}
    // int[4] arr[] = {1}
    int arr[][3] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12
    };

    printf("sizeof(arr) = %lu\n", sizeof(arr));

    for (int i = 0; i < sizeof(arr) / sizeof(int[3]); i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        putchar(10);
    }
    return 0;
}