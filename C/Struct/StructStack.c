#include <stdio.h>

// 
typedef struct _Stack {
	char mem[1024];
	int top;
} Stack;

int isFull(Stack *ps) {
	return ps->top == 1024;
}

int isEmpty(Stack *ps) {
	return ps->top == 0;
}

void push(Stack *ps, char ch) {
	ps->mem[ps->top++] = ch;
}

char pop(Stack *ps) {
	return ps->mem[--(ps->top)];
}

int main(int argc, char *argv[]) {
	
	Stack s = {{0}, 0};
	
	for (char ch = 'a'; ch <= 'z'; ch++) {
		if (!isFull(&s)) {
			push(&s, ch);
		}
		
	}
	
	while (!isEmpty(&s)) {
		putchar(pop(&s));
		puts("");
	}
	return 0;
}