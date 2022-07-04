#include <stdio.h>

//#pragma pack(1)

// 类型本身不占空间，类型产生的变量才占用
// 结构体中的每个成员的地址均是可以获得的

/*
内存不对齐：用多个机器周期去读一个变量
内存对齐：牺牲空间换时间

pack	n	8		4	m
					Y = 4  外对齐

 成员
		1
		2
		4
                    X    1
                         2
                         4

①取 pack(n)的值（n= 1 2 4 8--)，取结构体中类型最大值m。两者取小即为外对齐大小Y=(m<n?m:n)；
②将每一个结构体的成员大小与Y比较取小者为X，作为内对齐大小；
③所谓按X对齐，即为地址ADDRESS(设起始地址为0)，能被X整除的地方开始存放数据；（ADDRESS % X == 0的 ADDRESS，开始存放数据）
④外部对齐原则是依据Y的值(Y的最小整数倍)，进行补空操作。
*/


typedef struct _staff {
    char sex;
    short num;
    int age;
//	short num;
//    struct _staff * next;
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
//	printf("&s.next = %p\n", &s.next);
    return 0;
}