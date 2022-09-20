#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//地址指针接受，所以arr其实是int*arr即指针变量，则sizeof计算指针变量大小，为4或8，x32 x64对应
}
void test2(int ch[])
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	return 0;
}