#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	//1.ָ��δ��ʼ��
	int* p;//����ʼ��Ĭ��Ϊ���ֵ�����ʵ��ڴ���ܲ�������
	*p = 20;//�Ƿ�����

	//2.ָ��Խ�����
	int arr[10] = { 0 };
	int* pc = arr;
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*p = 1;
		p++;
	}

	//3.ָ��ָ��Ŀռ��ͷ�
	int* pb = test();
	*pb = 20;//a���ڵ��ڴ治�������㣬��ʱΪ�Ƿ�����


	return 0;
}