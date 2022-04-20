#include <stdio.h>

// 节点
typedef struct dnode {
	int data;
	struct dnode *pre; // 指向前一个
	struct dnode *next; // 指向后一个
} DNode;

void traverseDlistNext(DNode * head) {
	DNode * sh = head->next;
	while (sh != head) {
		printf("%d\n", sh->data);
		sh = sh->next;
	}
}

void traverseDlistPre(DNode * head) {
	DNode * sh = head->pre;
	while (sh != head) {
		printf("%d\n", sh->data);
		sh = sh->pre;
	}
}

int main(int argc, char *argv[]) {
	DNode a, b, c, d, e;
	DNode * head = &a;
	b.data = 11;
	c.data = 22;
	d.data = 33;
	e.data = 44;
	
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = &a;
	
	a.pre = &e;
	b.pre = &a;
	c.pre = &b;
	d.pre = &c;
	e.pre = &d;
	
//	traverseDlistNext(head);
	traverseDlistPre(head);
	
	return 0;
}