#include <stdio.h>

typedef struct node {
    int data; // 数据域
    struct node *next; // 指针域
} Node;

int main(int argc, char *argv[]) {
    Node a, b, c, d, e; // 此节点均在栈上
    Node *head;
    head = &a;  // 1.开头

    a.data = 1;  // 2.内容
    b.data = 2;
    c.data = 3;
    d.data = 4;
    e.data = 5;

    a.next = &b;  // 3.链接
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL; // 4.结尾

    Node *pHead = head;
    while (pHead != NULL) {
        printf("%d\n", pHead->data);
        pHead = pHead->next;
    }

    return 0;
}