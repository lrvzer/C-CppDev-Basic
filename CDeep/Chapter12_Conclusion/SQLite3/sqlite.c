#include <stdio.h>
#include "sqlite3.h"

int myCallBack(void *p,int argc,char **argv, char **col)
{
//	for(int i=0; i<argc; i++) {
//		printf("%s %s\n",col[i],argv[i]); 
//	}
	
	static int flag = 1;
	if (flag) {
		for (int i = 0; i < argc; i++) {
			printf("%s\t", col[i]);
		}
		flag = 0;
	}
	
	for (int i = 0; i < argc; i++) {
		printf("%s\t", argv[i]);
	}
	
	putchar(10);
	
	
	return 0;        //调用成功返回  0 
}

int main(int argc, char *argv[]) {
	
	sqlite3 * db;
	
	char *zErrMsg = 0;
	int rc;
	rc = sqlite3_open("mydata.db", &db); 
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db)); 
		sqlite3_close(db);
		return -1; 
	}
	
	char * sql;
#if 0
	sql = "create table salary(name text, address text, salary REAL)";
	sql = "insert into salary(\"caocao\", \"weiguo\", 10000)";
	
	char usql[1024];
	sql = "update salary set salary = %f where name = \"caocao\"";
	
	float salary;
	scanf("%f", &salary);
	sprintf(usql, sql, salary);
	
	
	sql = "delete from salary where name  = \"caocao\"";


	
	sql = "select * from salary";
	
	rc = sqlite3_exec(db, sql, myCallBack, NULL, &zErrMsg);
	if (rc != SQLITE_OK) {
	fprintf(stderr, "SQL error: %s\n", zErrMsg);
	sqlite3_free(zErrMsg);
	}
#endif
	
	char ** table = NULL;
	sql = "select * from salary";
	int row, column;
	rc = sqlite3_get_table(db, sql, &table, &row, &column, &zErrMsg);
	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
		sqlite3_free_table(table);
	}
	
	for (int i = 0; i < row; i++) {
		printf("%s\t", table[i]);
	}
	putchar(10);
	for (int i = column; i < (row + 1) * column; i++) {
		printf("%s\t", table[i]);
		if (!(i % column)) {
			putchar(10);
		}
	}
	

	sqlite3_free_table(table);
	sqlite3_close(db); 
	return    0;
}