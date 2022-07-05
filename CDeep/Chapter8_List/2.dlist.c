#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 节点
typedef struct dnode {
	int data;
	struct dnode *pre; // 指向前一个
	struct dnode *next; // 指向后一个
} DNode;

// 创建
DNode * createDList() {
	DNode * head = (DNode*)malloc(sizeof(DNode));
	if (NULL == head)
		exit(-1);
	head->next = head;
	head->pre = head;
	return head;
}

// 插入数据
void insertDList(DNode * head, int data) {
	DNode * cur = (DNode*)malloc(sizeof(DNode));
	if (NULL == cur)
		exit(-1);
	cur->data = data;
	
	cur->next = head->next;
	cur->pre = head;
	
	head->next = cur;
	cur->next->pre = cur;
}

// 遍历
void traverseDList(DNode * head) {
	DNode * sh = head->next;
	while (sh != head) {
		printf("%d\t", sh->data);
		sh = sh->next;
	}
	putchar(10);
}

// 求长
int LenDList(DNode * head) {
	int len = 0;
	DNode * sh = head->next;
	while (sh != head) {
		len++;
		sh = sh->next;
	}
	return len;
}

// 查找
DNode * searchDList(DNode * head, int find) {
	DNode * clock = head->next, * unclock = head->pre;
	
	while (clock != unclock) {
		if (clock->data == find)
			return clock;
		if (unclock->data == find)
			return unclock;
		if (clock == unclock)
			break;
		clock = clock->next;
		unclock = unclock->pre;
	}
	return NULL;
}

// 删除
void deleteDList(DNode * pfind) {
	pfind->pre->next = pfind->next;
	pfind->next->pre = pfind->pre;
	free(pfind);
}

// 销毁
void destoryDList(DNode * head) {
	head->pre->next = NULL;
	DNode * cur;
	while (head) {
		cur = head;
		head = head->next;
		free(cur);
	}
}

// 排序
void sortDList(DNode * head) {
	int len = LenDList(head);
	DNode *p, *q, *t;
	for (int i = 0; i < len - 1; i++) {
		p = head->next;
		q = p->next;
		for (int j = 0; j < len - i - 1; j++) {
			if (p->data > q->data) {
				p->pre->next = q;
				q->pre = p->pre;
				
				p->next = q->next;
				p->pre = q;
				
				q->next = p;
				p->next->pre = p;
				
				q = p->next;
				continue;
			}
			
			p = p->next;
			q = q->next;
		}
	}
}

int main(int argc, char *argv[]) {
	DNode * head = createDList();
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		insertDList(head, rand() % 100);
	}
	traverseDList(head);
	int len = LenDList(head);
	printf("len = %d\n", len);
	
	DNode * pfind = searchDList(head, 1);
	if (NULL == pfind)
		printf("find none\n");
	else {
		printf("%d in list\n", pfind->data);
		deleteDList(pfind);
		printf("after delete\n");
		traverseDList(head);
	}
	
	sortDList(head);
	printf("after sort\n");
	traverseDList(head);
	
	destoryDList(head);
	return 0;
}