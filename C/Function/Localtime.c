#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
	time_t rawtime = time(NULL);
	struct tm * timeInfo;
	timeInfo = localtime(&rawtime);
	
	printf("Current local time and date: %s", asctime(timeInfo));
	
	printf("year:  %d\n", timeInfo->tm_year + 1900);
	printf("month: %d\n", timeInfo->tm_mon + 1);
	printf("day:   %d\n", timeInfo->tm_mday);
	printf("hour:  %d\n", timeInfo->tm_hour);
	printf("min:   %d\n", timeInfo->tm_min);
	printf("sec:   %d\n", timeInfo->tm_sec);
	
	
	return 0;
}