#include <stdio.h>

void disArr(int *pArr, int i, int len) {
    for (; i < len; i++) {
        printf("%d\t", pArr[i]);
    }

    putchar(10);
}

void reverseArr(int *pArr, int i, int len) {
//	printf("%d\n", pArr[i]); // 正序
    if (i != len - 1)
        reverseArr(pArr, i + 1, len);
    printf("%d\n", pArr[i]); // 逆序

}

int main(int argc, char *argv[]) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//	disArr(arr, 0, 10);
    reverseArr(arr, 0, 10);
    return 0;
}

#if 0
// 递归
int getAge(int n) {
    if (n == 5)
        return 10;
    else
        return getAge(n + 1) + 2;
}

int main(int argc, char *argv[]) {
    int age = getAge(1);
    printf("%d\n", age);
}
#endif