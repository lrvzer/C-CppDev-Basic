#include <stdio.h>
#include <stdlib.h>

int compare(const void *pa, const void *pb) {
//	return *((int *)pa) < *((int*)pb) ? 1 : -1;
//	return *((int *)pa) - *((int*)pb);
    return *((int *) pb) - *((int *) pa);
}

int main(int argc, char *argv[]) {
    int arr[10] = {6, 5, 4, 3, 2, 1, 7, 8, 9, 0};
    qsort(arr, 10, 4, compare);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}