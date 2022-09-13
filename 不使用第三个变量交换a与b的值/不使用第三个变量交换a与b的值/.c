#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a=%d b=%d", a, b);//如果数字过大会出现栈溢出现象
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}

