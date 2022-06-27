#include <stdio.h>

// 整型提升，小范围向大范围的空间转，由于符号扩充的行为，保证了数据的正确性
int main() {
	char ch; short sh; int in;
	// integer promotion
	// char + char
	printf("sizeof(ch)      = %d\n", sizeof(ch));
	printf("sizeof(ch + ch) = %d\n", sizeof(ch+ch));

	// char + short
	printf("sizeof(sh)      = %d\n", sizeof(sh));
	printf("sizeof(ch + sh) = %d\n", sizeof(sh + ch));

	// char + int
	printf("sizeof(ch + in) = %d\n", sizeof(ch + in));
	printf("sizeof(sh + in) = %d\n", sizeof(sh + in));
	
	ch  = 127;
	in = ch;
	printf("ch = %d\n", ch);
	printf("in = %d\n", in);

	ch = -1;
	in = ch;
	printf("ch = %d\n", ch);
	printf("in = %d\n", in);
	return 0;
}
