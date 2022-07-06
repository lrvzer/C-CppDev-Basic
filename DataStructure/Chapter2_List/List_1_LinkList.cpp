#include <iostream>

using namespace std;

typedef struct LNode {
    int data; // 数据域
    struct LNode *next; // 指针域
} LNode, *LinkList;

// 初始化
bool initList(LinkList &head) {
    head = new LNode; // 生成新结点作为头结点，用头指针head指向头结点
    if (!head)
        return false;
    head->next = NULL;
    return true;
}

void insertList_Head(LinkList &head, int data) {
    LinkList cur = new LNode;
    cur->data = data;
    cur->next = head->next;
    head->next = cur;
}

void traverList(LinkList head) {

}

int main(int argc, char *argv[], char **env) {
    LinkList head;
    initList(head);
    for (int i = 0; i < 5; ++i) {
        insertList_Head(head, i++);
    }
}