#include<iostream>

void foo(double d) {}
void foo(int a)  {}

int main() {
	int a = 10;
	foo(a);
	return 0;
}
