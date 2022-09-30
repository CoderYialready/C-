#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	//1.指针未初始化
	int* p;//不初始化默认为随机值，访问的内存可能不属于你
	*p = 20;//非法访问

	//2.指针越界访问
	int arr[10] = { 0 };
	int* pc = arr;
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*p = 1;
		p++;
	}

	//3.指针指向的空间释放
	int* pb = test();
	*pb = 20;//a所在的内存不再属于你，此时为非法访问


	return 0;
}