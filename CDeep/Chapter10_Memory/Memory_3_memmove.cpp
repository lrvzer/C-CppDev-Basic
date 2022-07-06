#include <stdio.h>
#include <cstring>

// 如果目标区域和源区域有重叠的话，memmove 能够保证源串在被覆盖之前，将重叠 区域的字节拷贝到目标区域中，但复制后源内容会被更改。
int main() {
    char str[] = "memmove can be very useful......";
    // strncpy(str+20,str+15,11);
    memmove(str + 20, str + 15, 11);
    puts(str);
    return 0;
}