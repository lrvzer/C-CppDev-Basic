#include <iostream>

using namespace std;

typedef struct _List {
    int data;
    struct _List *next;
} LNode;

class MyList {
    public:
        MyList();
        void insertList(int d); // 头插法
        void traverseList(); // 遍历链表
        void destroyList(); // 销毁链表
    private:
        LNode *head;
};

MyList::MyList() {
    head = new LNode; // head指针指向头结点
    head->next = nullptr;
}

void MyList::insertList(int d) {
    LNode *cur = new LNode;
    cur->data = d;

    cur->next = head->next;
    head->next = cur;
}

void MyList::traverseList() {
    LNode *p = head->next;
    while (p) {
        cout << p->data << '\t';
        p = p->next;
    }
}

void MyList::destroyList() {
    LNode *p;
    while (head) {
        p = head;
        head = head->next;
        free(p);
    }
}

int main() {
    MyList list;
    for (int i = 0; i < 10; ++i) {
        list.insertList(i);
    }
    list.traverseList();
    list.destroyList();
    return 0;
}
