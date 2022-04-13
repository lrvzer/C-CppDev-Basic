#include <stdio.h>

// 指针 类型（步长）+ 地址（物理数据）

// 数值+1，就是加1
// 指针+1，加的是步长，即指针类型的大小

int main(int argc, char *argv[]) {
	int * p = (int *) 0x0001;
	int pData = 0x0001;
	printf("p     = %#x, p+1 = %#x\n", p, p+1);
	printf("pData = %#x, pData+1 = %#x\n", pData, pData+1);
	
	
	printf("(double*)p = %#x, (double*)p+1 = %#x\n", (double*)p, (double*)p+1);
	printf("(int)p     = %#x, (int)p+1     = %#x\n", (int)pData, (int)pData+1);

	/*
	
	p     = 0x1,     p+1 = 0x5
	pData = 0x1, pData+1 = 0x2
	(double*)p = 0x1, (double*)p+1 = 0x9
	(int)p     = 0x1, (int)p+1     = 0x2
	
	*/
	
	printf("%p\n", ++p); // 0x5
	printf("%d\n", ++pData); // 2
	
	int arr[10];
	
	int *pHead = &arr[0], *pTail = &arr[9];
	printf("%ld\n", pTail - pHead); // 9
	
	int head = (int)&arr[0], tail = (int)&arr[9];
	printf("%d\n", tail - head); // 36
	
	return 0;
}