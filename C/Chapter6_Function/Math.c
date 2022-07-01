#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	double data = 9.0;
	double root = sqrt(data);
	printf("%.2f\n", root);
	
	double power = pow(data, 2);
	printf("%.2f\n", power);

	printf("%.3f\n", ceil(3.14)); // 向上取整
	printf("%.3f\n", floor(3.14)); // 向下取整
	
	for (char ch = 'a'; ch <= 'z'; ch ++) {
		putchar(toupper(ch));
	}
	putchar(10);
	
	for (char ch = 'A'; ch <= 'Z'; ch ++) {
		putchar(tolower(ch));
	}
	
	return 0;
}