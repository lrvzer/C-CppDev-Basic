#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 数组指针
#if 0
hell
o_ev
eryo
ne**
#endif

char * encode(char * buf, int line) {
	int bufLen = strlen(buf);
	
	int newBufLine = bufLen;
	if (bufLen % line) {
		newBufLine = bufLen + (line - bufLen % line);
	}
	
	char * newBuf = (char *) malloc(newBufLine+1);
	strcpy(newBuf, buf);
	for (int i = bufLen; i < newBufLine; i++) {
		newBuf[i] = '*';
	}
	newBuf[newBufLine] = '\0';
	
	char * sec = (char *)malloc(newBufLine + 1);
	char * subSec = sec;
	char (*rp)[line] = newBuf;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < newBufLine / line; j++) {
			*subSec++ = rp[j][i];
		}
	}
	*subSec = '\0';
	
	free(newBuf);
	return sec;
}

char * decode(char * sec, int line) {
	int len = strlen(sec);
	
	char * buf = (char *)malloc(len+1);
	char * subBuf = buf;
	char (*rp)[line] = sec;
	
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < len / line; j++) {
			*subBuf++ = rp[j][i];
		}
	}
	
	while (*(--subBuf) == '*');
	*(++subBuf) = '\0';
	return buf;
}

int main(int argc, char *argv[]) {
	char * buf = "hello_everyone";
	char * sec = encode(buf, 6);
	printf("%s\n", sec);
	
	char * enSec = decode(sec, 3);
	printf("%s\n", enSec);
	
	free(sec);
	free(enSec);
	return 0;
}