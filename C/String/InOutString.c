#include <stdio.h>

// 输入
// 输入的字符串，一旦越数组界，此时的数组，仅仅是字符数组而已

/* 不安全
 * scanf() 遇到空格结束输入，解决：scanf("%[^\n]s", arr);
 * gets() 空格也可以输入
 */

/* 安全
 * fgets(arr, 10, stdin);
 */

int main(int argc, char *argv[]) {
	
	char arr[6] = "China";
//	scanf("%[^\n]s", arr);
//	gets(arr);
	fgets(arr, 10, stdin);
	printf("%s", arr);
	
	return 0;
}

// 输出
int main1(int argc, char *argv[]) {
	char arr[100] = "China";
	printf("%s\n", arr);
	puts(arr);
	
	puts(""); // 此句带有换行的性质
	printf("--%lu--", sizeof("")); // \0
	return 0;
}