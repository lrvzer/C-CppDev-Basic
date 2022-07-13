#include "myString.h"

extern "C" {
int my_strlen(const char *src) {
    int len = 0;
    while (*src) src++, len++;
    return len;
}
}

void my_str(const char * src){

}