#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    char name[30];
    char sex;
    int age;
    float score;
} Stu;

typedef struct _StuNode {
    Stu data;
    struct _StuNode *next;
} StuNode;

void initData2File() {
    Stu s[4] =
        {
            "liudehua", 'x', 50, 100,
            "zhangxueyou", 'x', 60, 98,
            "liming", 'f', 50, 88,
            "guofucheng", 'm', 49, 90
        };

    FILE *pf = fopen("stu.data", "w+");
    if (NULL == pf)
        exit(-1);

    fwrite((void *) s, sizeof(s), 1, pf);

    fclose(pf);
}

StuNode *createListFromDataFile(char *filePath) {
    FILE *pf = fopen(filePath, "r+");
    if (NULL == pf)
        exit(-1);

    StuNode *head = (StuNode *) malloc(sizeof(StuNode));
    head->next = NULL;

    StuNode *cur = (StuNode *) malloc(sizeof(StuNode));

    while (fread((void *) &cur->data, sizeof(Stu), 1, pf)) {
        cur->next = head->next;
        head->next = cur;
        cur = (StuNode *) malloc(sizeof(StuNode));
    }
    free(cur);
    return head;
}

void traverList(StuNode *head) {
    printf("name\t\t\tsex\t\tage\t\tscore\n");
    head = head->next;
    while (head) {
        printf("%-10s\t\t%c\t\t%d\t\t%.2f\n", head->data.name, head->data.sex, head->data.age, head->data.score);
        head = head->next;
    }
}

void addListStuNode(StuNode *head) {
    StuNode *cur = (StuNode *) malloc(sizeof(StuNode));
    printf("name:");
    scanf("%s", cur->data.name);
    printf("sex:");
    scanf("%c", &cur->data.sex);
    printf("age:");
    scanf("%d", &cur->data.age);
    printf("score:");
    scanf("%f", &cur->data.score);
    cur->next = head->next;
    head->next = cur;

    free(cur);
}

StuNode *searchListStuNode(StuNode *head) {
    char name[30];
    printf("pls input your search name:");
    scanf("%s", name);
    head = head->next;
    while (head) {
        if (strcmp(head->data.name, name) == 0)
            break;
        head = head->next;
    }
    return head;
}

void deleteListStuNode(StuNode *head) {
    StuNode *pfind = searchListStuNode(head);
    if (NULL == pfind) {
        printf("您要删除的人不存在\n");
        return;
    }
    while (head->next != pfind) {
        head = head->next;
    }
    head->next = pfind->next;
    free(pfind);
    return;
}

int lenList(StuNode *head) {
    int len = 0;
    head = head->next;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

void sortListStu(StuNode *head) {
    int len = lenList(head);
    StuNode *prep, *p, *q;
    for (int i = 0; i < len - 1; i++) {
        prep = head;
        p = head->next;
        q = p->next;
        for (int j = 0; j < len - i - 1; j++) {
            if (strcmp(p->data.name, q->data.name) > 0) {
                prep->next = q;
                p->next = q->next;
                q->next = p;

                prep = q;
                q = p->next;
                continue;
            }
            prep = prep->next;
            p = p->next;
            q = p->next;
        }
    }
}

void saveListStu2File(StuNode *head, char *filePath) {
    FILE *pf = fopen(filePath, "w+");
    if (NULL == pf)
        exit(-1);

    head = head->next;
    while (head) {
        fwrite((void *) &head->data, sizeof(Stu), 1, pf);
        head = head->next;
    }
    fclose(pf);
}

void destoryListStu(StuNode *head) {
    StuNode *t;
    while (head) {
        t = head;
        head = head->next;
        free(t);
    }
}

int main() {
//  initData2File();
    StuNode *head = createListFromDataFile("stu.data");
    while (1) {
        system("clear");
        traverList(head);
        printf("1->add\t 2->search\t 3->delete\t 4->sort\t 5->exit\n");
        int choice;
        scanf("%d", &choice);
        StuNode *pfind;
        switch (choice) {
            case 1:addListStuNode(head);
                break;
            case 2:
                if ((pfind = searchListStuNode(head))) {
                    printf("您查找的姓名在系统内\n");
                    printf("%-10s\t\t%c\t\t%d\t\t%.2f\n",
                           pfind->data.name,
                           pfind->data.sex,
                           pfind->data.age,
                           pfind->data.score);
                } else {
                    printf("查无此人");
                }
                break;
            case 3:deleteListStuNode(head);
                break;
            case 4:sortListStu(head);
                break;
            case 5:saveListStu2File(head, "stu.data");
                destoryListStu(head);
                return 0;
            default:printf("您输入有误\n");
        }
    }
    return 0;
}