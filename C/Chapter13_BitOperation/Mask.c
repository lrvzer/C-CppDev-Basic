#include <stdio.h>

void displayBinary(int data) {
	int i = 32;
	while (i--) {
		if (data & (1 << i)) {
			printf("1");
		} else {
			printf("0");
		}
		
		if (i % 4 == 0) {
			if (i % 8 == 0)
				printf(" ");
			else
				printf("-");
		}
	}
	putchar(10);
}

int main() {
	int num = 0x55;
	displayBinary(num);
	int mask = (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6);
	num &= mask;
	displayBinary(num);
	displayBinary(num >> 3);
	
	return 0;
}

int main5() {
	int ch = 0x55;
	int mask = 1 << 4;
	
	if (ch & mask)
		printf("此位为1")	;
	else
		printf("此位为0");
	return 0;
}

int main4() {
	
	int ch = 0x55;
	displayBinary(ch);
	
	int mask = (1 << 5) | (1 << 4) | (1 << 3) | (1 << 2);
	ch ^= mask;
	displayBinary(ch);
	
	return 0;
}

int main3() {
	// 0101 0101
	// 1110 1011
	// 0001 0100
	
	// 0001 0000
	// 0000 0100
	
	int ch = 0x55;
	displayBinary(ch);

	int mask = ~((1 << 2) | (1 << 4));
	ch &= mask;
	displayBinary(ch);
	return 0;
}

int main2() {
	// 1开 0闭
	// 0101 0101
	// 0100 0101  需要变成这样
	
	// 0101 0101
	// 1110 1111
	// 0001 0000
	
	int ch = 0x55;
	int mask = ~(1 << 4);
	
	displayBinary(ch);
	
	ch &= mask;
	
	displayBinary(ch);
	
	return 0;
}

int main1(int argc, char *argv[]) {
	
	// 1开 0闭
	// 0101 0101
	// 0000 1000
	// 0101 1101
	
	int ch = 0x55;
	int mask = 1 << 3;
	
	displayBinary(ch);
	
	ch = ch | mask;
	
	displayBinary(ch);
	
	return 0;
}