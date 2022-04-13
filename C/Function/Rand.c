#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	unsigned int seed = time(NULL);
	printf("seed = %d\n", seed);
	
	srand(time(NULL)); // 给随机数发生器一个种子，rand()去发生器去取数
	RAND_MAX; // 0x01111111 11111111 = 0x7fff
	int num = rand() % 100;
	printf("%d\n", num);
	
	// 区间为[100, 200]随机数
	srand(time(NULL));
	int a = rand() % 101 +100;
	printf("%d range of 100, 200\n", a);
	
	
	int count = 0;
	int arr[10];
	while (1) {
		int num = rand() % 10;
		
		arr[count++] = num;
		
		// 从数组开始与最后一个内容进行比对
		for (int i = 0; i < count-1; i++) {
			if (arr[i] == arr[count-1]) {
				count --;
				break;
			}
		}
		
		if (count == 10) {
			break;
		}
	}
	
	for (int i=0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
	
	return 0;
}