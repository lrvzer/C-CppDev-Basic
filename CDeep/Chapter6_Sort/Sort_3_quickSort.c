#include <stdio.h>

void quickSort(int *p, int low, int high) {
    if (low < high) {
        int pivot = p[low], l = low, h = high;

        while (l < h) {
            while (p[h] >= pivot && l < h) { // 大而移动，小而赋值
                h--;
            }
            p[l] = p[h];
            while (p[l] < pivot && l < h) { // 小而移动，大而赋值
                l++;
            }
            p[h] = p[l];
        }

        p[l] = pivot;
        quickSort(p, low, l - 1);
        quickSort(p, l + 1, high);
    }
}

int main(int argc, char *argv[]) {
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}