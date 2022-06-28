#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int chess[10][10] = {0};
    int count = 0; //记录棋子数

    srand(time(NULL));
    int x, y;
    // 随机生成坐标，0替换1
    while (count < 10) {
        x = rand() % 10;
        y = rand() % 10;
        if (chess[x][y]) {
            continue;
        }
        chess[x][y] = 1;
        count++;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", chess[i][j]);
        }
        putchar(10);
    }

    // 任意横向或者纵向连续三个1即为好棋
    int countContinue = 0;
    int flagGoodChess = 0;
    for (int i = 0; i < 10; i++) {
        // 横向扫描
        for (int j = 0; j < 10; j++) {
            if (chess[i][j] == 1) {
                countContinue++;
                if (countContinue == 3) {
                    flagGoodChess = 1;
                    break;
                }
            } else {
                countContinue = 0;
            }
        }
        if (flagGoodChess) {
            break;
        }

        // 纵向扫描
        countContinue = 0;
        for (int j = 0; j < 10; j++) {
            if (chess[j][i] == 1) {
                countContinue++;
                if (countContinue == 3) {
                    flagGoodChess = 1;
                    break;
                }
            } else {
                countContinue = 0;
            }
        }
        if (flagGoodChess) {
            break;
        }

    }

    if (flagGoodChess) {
        printf("好棋");
    } else {
        printf("坏棋");
    }

    return 0;
}