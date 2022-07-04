#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int data; // 数据域
    struct node *next; // 指针域
} Node;

#if 0
Node* createList() {
    Node* head = (Node *) malloc (sizeof(Node));
    if (NULL == head)
        exit(-1);
    head->next = NULL;

    Node *tail = head, *cur;
    int nodeData;
    scanf("%d", &nodeData);
    while (nodeData) {
        cur = (Node*) malloc (sizeof(Node));
        if (NULL == cur)
            exit(-1);
        cur->data = nodeData;
        tail->next = cur;
        tail = cur;
        scanf("%d", &nodeData);
    }
    tail->next = NULL;
    return head;
}
#endif

#if 0
Node* createList() {
    Node* head = (Node *) malloc (sizeof(Node));
    if (NULL == head)
        exit(-1);
    head->next = NULL;

    Node *cur;
    int nodeData;
    scanf("%d", &nodeData);

    while (nodeData) {
        cur = (Node*) malloc (sizeof(Node));
        if (NULL == cur)
            exit(-1);
        cur->data = nodeData;
        cur->next = head->next;
        head->next = cur;
        scanf("%d", &nodeData);
    }
    return head;
}
#endif

Node *createList() {
    Node *head = (Node *) malloc(sizeof(Node));
    if (NULL == head)
        exit(-1);
    head->next = NULL;
    return head;
}

// 插入数据
void insertList(Node *head, int nodeData) {
    Node *cur = (Node *) malloc(sizeof(Node));
    if (NULL == cur)
        exit(-1);
    cur->data = nodeData;
    cur->next = head->next;
    head->next = cur;
}

// 遍历
void traverList(Node *head) {
    head = head->next;
    while (head) {
        printf("%d\t", head->data);
        head = head->next;
    }
    puts("");
}

// 求长
int lenList(Node *head) {
    int len = 0;
    head = head->next;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

// 查
Node *searchList(Node *head, int findData) {
    head = head->next;
    while (head) {
        if (head->data == findData)
            break;
        head = head->next;
    }
    return head;
}

void deleteNodeOfList(Node *head, Node *pfind) {
    while (head->next != pfind) {
        head = head->next;
    }
    head->next = pfind->next;
    free(pfind);
    pfind = NULL;
}

void deleteNodeOfListPro(Node *head, Node *pfind) {
    if (pfind == NULL) {
        while (head->next != pfind) {
            head = head->next;
        }
        head->next = pfind->next;
        free(pfind);
        pfind = NULL;
    } else {
        Node *t = pfind->next;
        pfind->data = pfind->next->data;
        pfind->next = pfind->next->next;
        free(t);
    }
}

// 冒泡排序
void popSortList(Node *head) {
    int len = lenList(head);
    head = head->next;
    Node *p, *q;
    for (int i = 0; i < len - 1; i++) {
        p = head;
        q = head->next;
        for (int j = 0; j < len - 1 - i; j++) {
            if (p->data > q->data) {
                p->data ^= q->data;
                q->data ^= p->data;
                p->data ^= q->data;
            }
            p = p->next;
            q = q->next;
        }
    }
}

// 冒泡排序增强
void popSortListPro(Node *head) {
    int len = lenList(head);
    Node *pre, *p, *q, *t;
    for (int i = 0; i < len - 1; i++) {
        pre = head;
        p = head->next;
        q = p->next;
        for (int j = 0; j < len - 1 - i; j++) {
            if (p->data > q->data) {
                pre->next = q;
                p->next = q->next;
                q->next = p;

                t = p;
                p = q;
                q = t;
            }
            pre = pre->next;
            p = p->next;
            q = p->next;
        }
    }
}

// 逆置
void revertList(Node *head) {
    Node *cur = head->next;
    head->next = NULL;
    Node *t;
    while (cur) {
        t = cur;
        cur = cur->next;

        t->next = head->next;
        head->next = t;
    }
}

// 销毁链表
void destoryList(Node *head) {
    Node *p;
    while (head) {
        p = head;
        head = head->next;
        free(p);
    }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));
    // 1 2 3 0
    Node *head = createList();
    for (int i = 0; i < 10; i++) {
        insertList(head, rand() % 100);
    }
    traverList(head);
    printf("len = %d\n", lenList(head));

    Node *pfind = searchList(head, 5);
    if (NULL == pfind)
        printf("find none\n");
    else {
        printf("find in list\n");
        deleteNodeOfList(head, pfind);
    }
    traverList(head);

    popSortListPro(head);
    traverList(head);

    revertList(head);
    traverList(head);

}