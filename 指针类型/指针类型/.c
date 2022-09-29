#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;
	printf("%p\n", p);  
	printf("%p\n", p + 1);//跳过一个整形，四个字节
	printf("%p\n", pc);
	printf("%p\n", pc + 1);//跳过一个字符，一个字节

	int* pb = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;//p + i相当于下标 +0为arr[0]即首地址
	}
	//指针类型决定了:指针解引用权限有多大
	//指针类型决定了指针走一步能走多远
	return 0;
}