#include <stdio.h>

// 正是因为字符数组和字符串拥有相同的性质，
// 所以要改变字符串的内容，通常将常字符串拷贝字符数组中去。

int main(int argc, char *argv[]) {
	
	// arr[6]是栈上的空间，"china"是data段一块常量区域
	char arr[6] = "china";
	printf("sizeof(arr)     = %lu\t arr     = %p\t arr + 1     = %p\n", sizeof(arr), arr, arr + 1);
	printf("sizeof(\"china\") = %lu\t \"china\" = %p\t \"china\" + 1 = %p\n", sizeof("china"), "china", &"china" [ 1]);
	
	printf("arr     = %s\n", arr);
	printf("\"china\" = %s\n", "china");
	arr[2] = 'x';
	printf("arr     = %s\n", arr);

	return 0;
}

#if 0
int main(int argc, char *argv[]) {
	char *p = "chxna";
	printf("%c\n", p[2]);
	p[2] = 'i';
	printf("%c\n", p[2]);
	
	char arr[] = {'c', 'h', 'x', 'n', 'a'};
	printf("%c\n", arr[2]);
	arr[2] = 'i';
	printf("%c\n", arr[2]);
	return 0;
}
#endif