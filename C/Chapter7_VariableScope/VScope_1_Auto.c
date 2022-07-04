#include <stdio.h>

/*
 * auto
 * 只能用于修饰局部变量，表示该变量存储于栈stack
 * 可以省略
 * 随开随用，用完即消
 */

int main(int argc, char *argv[]) {
    auto int a;
    return 0;
}