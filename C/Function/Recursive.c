#include <stdio.h>

int getAge(int n) {
	if (n == 1)
		return 10;
	else
		return getAge(n-1) + 2;
}

// 第一天吃桃子一半，+1 个
// 第十天还剩1个
int peachCount(int day) {
	if (day == 10)
		return 1;
	else
		return (peachCount(++day) + 1) * 2;
}

/* 阶乘 */
int factorial(int n) {
	if (n == 0) 
		return 1;
	else
		return n * factorial(n - 1);
}

void func(int i) {
	if (i > 0) {
		func(i/2);
	}
	printf("%d\n", i);
}

int main(int argc, char *argv[]) {
	int age = getAge(5);
	printf("age = %d\n", age);
	
	
	int count = peachCount(1);
	printf("count = %d\n", count);
	
	int fact = factorial(5)	;
	printf("5! = %d\n", fact);
	
	func(10);
	
	return 0;
}