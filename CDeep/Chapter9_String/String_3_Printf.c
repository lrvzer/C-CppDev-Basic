#include <stdio.h>

int main(int argc, char *argv[]) {
	int a = 1000;
	FILE * pf = fopen("a.txt", "w");
	fprintf(pf, "%d", a);
	
	char buf[1024];
	sprintf(buf, "%d", a);
	printf("%s\n", buf);
	
	char ip[16];
	int ip1, ip2, ip3, ip4;
	scanf("%d%d%d%d", &ip1, &ip2, &ip3, &ip4);
	sprintf(ip, "%d.%d.%d.%d", ip1, ip2, ip3, ip4);
	printf("ip address: %s\n", ip);
	return 0;
}