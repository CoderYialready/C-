#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//a++ 先使用，后++
	//++a 先++，后使用
	int a = 1;
	printf("%d\n", a++);//1
	printf("%d\n", a);//2


	return 0;
}