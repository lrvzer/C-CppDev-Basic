#include <stdio.h>

//#pragma pack(1)

// 类型本身不占空间，类型产生的变量才占用
// 结构体中的每个成员的地址均是可以获得的

#if 0
pack	n	8		4	m
					Y = 4  外对齐
①取 pack(n)的值（n= 1 2 4 8--),取结构体中类型最大值 m。两者取小即为外对齐大 小 Y= (m<n?m:n)；
②将每一个结构体的成员大小与 Y 比较取小者为 X,作为内对齐大小；
③所谓按 X 对齐，即为地址(设起始地址为 0)能被 X 整除的地方开始存放数据；
④外部对齐原则是依据 Y 的值(Y 的最小整数倍)，进行补空操作。
#endif


typedef struct _staff {
	char sex;
	short num;
	int age;
//	short num;
} Staff;

int main(int argc, char *argv[]) {
	Staff s;
	printf("sizeof(Staff) = %lu\n", sizeof(Staff));
	printf("sizeof(s) = %lu\n", sizeof(s));
	
	printf("&s     = %p\n", &s);
	printf("&s.sex = %p\n", &s.sex);
	printf("&s.num = %p\n", &s.num);
	printf("&s.age = %p\n", &s.age);
//	printf("&s.num = %p\n", &s.num);
	return 0;
}