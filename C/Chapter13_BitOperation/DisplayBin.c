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
	// 左移应用
	int a = 2;
	printf("%d\n", a << 1);
	return 0;
}

// 右移 低位舍弃
// 高位 无符号的数，有符号的正数 补0
//     有符号数的负数 高位补0，逻辑右移；补1，算术右移

int main6() {
	int a = 0x800000f0;
	displayBinary(a);
	displayBinary(a >> 1);
	displayBinary(a >> 2);
	
	return 0;
}

// 高位溢出，低位补零
// 移位大于32位会出现什么情况？

int main5() {
	int a = 0xff000000;
	displayBinary(a);
	displayBinary(a << 1);

	return 0;
}

// 跟1按位异或取反，跟0按位异或保持不变。 在某些位保持不变的情况下，某些取反
int main4() {
	int a = 0x55;
	displayBinary(a);
	
	int b = 0xff;
	displayBinary(b);
	
	displayBinary(a ^ b);
	return 0;
}

// 按位取反，用于间接的构造某些数据
int main3() {
	int a = 0x55;
	displayBinary(a);
	displayBinary(~a);
	return 0;
}

// 跟1按位或置1，跟0按位或保持不变。 在某些位保持不变的情况下，某些置1
int main2() {
	int a = 1, b = 2;
	displayBinary(a);
	displayBinary(b);
	displayBinary(a | b);
	return 0;
}

// 跟1按位与保持不变，跟0按位与清零。在某些位保持不变的情况下，某些清零
int main1(int argc, char *argv[]) {
	int a = 3, b = 11;
	displayBinary(a);
	displayBinary(b);
	displayBinary(a & b);
	return 0;
}