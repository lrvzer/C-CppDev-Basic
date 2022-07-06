#include <stdio.h>
#include <cstring>

int main() {

    char buf[10];
    memset((void*) buf, 'a', sizeof(char ) * 10); // 按字节初始化'a'
    for (int i = 0; i < 10; ++i) {
        printf("%c", buf[i]);
    }
    puts("");

    int arr[10];
    memset((void *)arr, 16, sizeof(int ) * 10); // 此时int读取4字节为(10 10 10 10)
    for (int i = 0; i < 10; ++i) {
        printf("%d\t", arr[i]);
    }

    return 0;
}