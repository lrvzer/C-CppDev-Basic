#include <stdio.h>

// 数组中最值问题
int main(int argc, char *argv[]) {
    int arr[10] = {100, 6, 8, 2, 0, 1, 3, 5, 7, 9};
    int maxValue = arr[0];
    int minValue = arr[0];

    for (int i = 0; i < 10; i++) {
        if (arr[i] > maxValue)
            maxValue = arr[i];
        if (arr[i] < minValue)
            minValue = arr[i];
    }

    printf("max value is: [%d]\n", maxValue);
    printf("min value is: [%d]\n", minValue);
    return 0;
}