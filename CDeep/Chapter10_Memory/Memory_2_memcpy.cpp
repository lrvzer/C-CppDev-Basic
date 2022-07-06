#include <stdio.h>
#include <cstring>

// 实现两段空间的拷贝
int main() {

    char src[10] = {'a', 'b', 'c', '\0', '\n', 'g', 'h', 'd', 'f', 'g'};
    char dest[10];
    memcpy((void *) dest, (void *) src, sizeof(char) * 10);
    for (int i = 0; i < 10; ++i) {
        printf("%d->%c\t", dest[i], dest[i]);
    }
    puts("");

    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int dArr[10];
    memcpy(dArr, arr, sizeof(arr));
    for (int i = 0; i < 10; ++i) {
        printf("%d\t", *(dArr + i));
    }

    return 0;
}