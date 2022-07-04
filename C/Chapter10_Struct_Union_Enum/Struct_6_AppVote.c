#include <stdio.h>
#include <string.h>

typedef struct _candidate {
    char name[30];
    int voteCount;
} Candidate;

void disCandidate(Candidate *c, int n, int abandon) {
    for (int i = 0; i < n; i++) {
        printf("Name:%s\tVoteCount:%d\n", c[i].name, c[i].voteCount);
    }
    printf("弃权人数：%d\n", abandon);

    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (c[i].voteCount > c[idx].voteCount) {
            idx = i;
        }
    }
    printf("恭喜%s获得了本次选举\n", c[idx].name);
}

int main(int argc, char *argv[]) {
    Candidate can[3] = {
        {"zhangsan", 0},
        {"lisi", 0},
        {"wangwu", 0}
    };
    int abandon = 0; // 弃权票

    disCandidate(can, 3, abandon);

    char buf[1024];

    // 10人投票
    for (int i = 0; i < 10; i++) {
        printf("pls input your like:");
        scanf("%s", buf);
        int flag = 1;
        for (int i = 0; i < 3; i++) {
            if (strcmp(buf, can[i].name) == 0) {
                can[i].voteCount++;
                flag = 0;
                break;
            }
        }

        if (flag) {
            abandon++;
        }
    }

    disCandidate(can, 3, abandon);
    return 0;
}