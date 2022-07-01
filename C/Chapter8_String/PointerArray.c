#include <stdio.h>

// 指针数组的本质是数组，数组指针的本质是指针

int main(int argc, char * argv[]) {
	
	char *pa = "China", *pb = "Ameria", *pc = "Canda", *pd = "Japan";
	printf("pa = %p\n", pa);
	printf("pb = %p\n", pb);
	printf("pc = %p\n", pc);
	printf("pd = %p\n", pd);
	
	char * pArr[] = {"China", "Ameria", "Canda", "Japan"};
	for (int i = 0; i < 4; i++) {
		printf("%p\t %s\n", pArr[i], pArr[i]);
	}
	
	return 0;
}

int main1(int argc, char * argv[]) {
	
	int arr[] = {1, 2, 3, 4}; // 整型数组
	char cArr[] = {'a', 'b', 'c'}; // 字符数组
	
	int a, b, c, d;
	int * ipArr[] = {&a, &b, &c, &d}; // {int *, int *, int *, int *} 整型指针数组
	
	char aa, bb, cc, dd;
	char * cpArr[] = {&aa, &bb, &cc, &dd}; // {char *, char *, char *, char *} 字符指针数组
	
	char *pa = "China", *pb = "Ameria", *pc = "Canda", *pd = "Japan";
	char * cppArr[] = {pa, pb, pc, pd}; // {char *, char *, char *, char *} 字符指针数组
	
	return 0;
}