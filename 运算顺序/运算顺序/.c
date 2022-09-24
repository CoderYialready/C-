#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	//在VS与linx系统中的运算结果不同,因为运算顺序不同
	//VS i = 4 最后加法4 + 4 + 4 = 12
	//linx i = 3 3 + 3 = 6 i = 4 6 + 4 = 10
	//同时也要避免写出如:a*f + b*c + v*k 之类的代码，这种代码存在多种运算顺序
	return 0;
}