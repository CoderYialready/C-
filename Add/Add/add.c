#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//导入静态库
#pragma comment(lib,"函数的声明与定义.lib")
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);



	return 0;
}