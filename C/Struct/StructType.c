#include <stdio.h>

// 无名结构体: 一般而言用于定义类型同时，定义变量，并且不会带来多余的命名
struct {
	char name[40];
	int num;
	char age;
	float score;
} s1, s2;

// 有名结构体: 一处定义，随处使用
typedef struct stu {
	char name[40];
	int num;
	char age;
	float score;
} Stu;

typedef struct stu STU;

int main(int argc, char *argv[]) {
	struct stu s;
	Stu ss;
	
	struct stu arr[4]; // int arr[4]
}