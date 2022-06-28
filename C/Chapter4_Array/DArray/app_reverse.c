#include <stdio.h>

// 以对角线为中线，数据互换
int main(int argc, char *argv[]) {
    int arr[4][4] = {
        'a', 'b', 'b', 'b',
        'c', 'a', 'b', 'b',
        'c', 'c', 'a', 'b',
        'c', 'c', 'c', 'a'
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2c", arr[i][j]);
        }
        putchar(10);
    }
    putchar('\n');

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i > j) {
                char tmp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = tmp;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2c", arr[i][j]);
        }
        putchar(10);
    }
    return 0;
}