#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//��ַָ����ܣ�����arr��ʵ��int*arr��ָ���������sizeof����ָ�������С��Ϊ4��8��x32 x64��Ӧ
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