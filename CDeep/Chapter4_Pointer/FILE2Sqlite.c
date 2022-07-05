#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
	Failure, Success, NameErr, SexErr, StrNumErr, ScoreErr
};

typedef struct _Stu {
	char *name;
	char *sex;
	char *strNum;
	float *score;
}Stu;

// sqlite3 *dp = NULL;
// int rc = sqlite2_open("my.db", &db);

int stuInit(Stu **pp) {
	*pp = (Stu *)malloc(sizeof(Stu));
	if (NULL == *pp)
		return Failure;
	
	(*pp)->name = malloc(100);
	if ((*pp)->name == NULL)
		return NameErr;
	strcpy((*pp)->name, "tangseng");
	
	(*pp)->sex = malloc(1);
	if ((*pp)->sex == NULL)
		return SexErr;
	*((*pp)->sex) = 'm';
	
	(*pp)->strNum = malloc(100);
	if ((*pp)->strNum == NULL)
		return StrNumErr;
	strcpy((*pp)->strNum, "100001");
	
	(*pp)->score = malloc(4);
	if ((*pp)->score== NULL)
		return ScoreErr;
	*((*pp)->score) = 100;
	
	return Success;
}


int main(int argc, char *argv[]) {
	
	Stu *ps;
	int ret = stuInit(&ps);
	if (ret == Success) {
		printf("初始化成功\n");
		printf("name:    %s\n", ps->name);
		printf("sex:     %c\n", *(ps->sex));
		printf("strNum:  %s\n", ps->strNum);
		printf("score:   %.0f\n", *(ps->score));
	}
	else {
		printf("错误码：%d\n", ret);
	}
	
	return 1;
}