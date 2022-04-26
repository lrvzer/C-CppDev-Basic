#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char * name;
	char * passwd;
	
	struct node * next;
} LoginNode;

int readConfig(LoginNode ** head, const char * path);
int login(LoginNode * head);
void trimStrSpace(char * str);
void destoryConfig(LoginNode ** head);
void traverConfig(LoginNode * head);

int main(int argc, char *argv[]) {
	LoginNode * head;
	int ret = readConfig(&head, "passwd");
	
	if (ret == -1) {
		exit(-1);
	}
	
	ret = login(head);
	if (ret)
		printf("Success\n");
	else
		printf("Failure\n");
	
	destoryConfig(&head);
	head = NULL;
	return 0;
}

void destoryConfig(LoginNode ** head) {
	LoginNode * p;
	while (*head) {
		p = (*head);
		(*head) = (*head)->next;
		
		free(p->name);
		free(p->passwd);
		free(p);
	}
}

void traverConfig(LoginNode * head) {
	head = head->next;
	while (head) {
		printf("name: %s\tpasswd: %s\n", head->name, head->passwd);
		head = head->next;
	}
}

int readConfig(LoginNode ** head, const char * path) {
	
	FILE * pf = fopen(path, "r+");
	if (NULL == pf) {
		return -1;
	}
	
	(*head) = (LoginNode *)malloc(sizeof(LoginNode));
	(*head)->next = NULL;
	if (NULL == (*head)) {
		return -1;
	}
	
	LoginNode * cur;
	char buf[1024];
	char * p;
	while (fgets(buf, 1024, pf)) {
		if (*buf == '#' || *buf == '[' || *buf == '\n') {
			continue;
		}
		trimStrSpace(buf);
		cur = (LoginNode *)malloc(sizeof(LoginNode));
		
		p = strtok(buf, "=\n");
		cur->name = (char *)malloc(strlen(p) + 1);
		strcpy(cur->name, p);

		p = strtok(NULL, "=\n");
		cur->passwd = (char *)malloc(strlen(p) + 1);
		strcpy(cur->passwd, p);
		
		cur->next = (*head)->next;
		(*head)->next = cur;
	}
	return 1;
}

int login(LoginNode * head) {
	char name[1024];
	char passwd[1024];
	printf("name:");
	scanf("%s", name);
	printf("passwd:");
	scanf("%s", passwd);
	
	head = head->next;
	while (head) {
		if (strcmp(head->name, name) == 0 && strcmp(head->passwd, passwd) == 0) {
			return 1;
		}
		head = head->next;
	}
	return 0;
}

void trimStrSpace(char * src) {
	char * t = src;
	while (*t) {
		if (*t != ' ') {
			*src++ = *t;
		}
		t++;
	}
	*src = '\0';
}