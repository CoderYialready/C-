#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;
	printf("%p\n", p);  
	printf("%p\n", p + 1);//����һ�����Σ��ĸ��ֽ�
	printf("%p\n", pc);
	printf("%p\n", pc + 1);//����һ���ַ���һ���ֽ�

	int* pb = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;//p + i�൱���±� +0Ϊarr[0]���׵�ַ
	}
	//ָ�����;�����:ָ�������Ȩ���ж��
	//ָ�����;�����ָ����һ�����߶�Զ
	return 0;
}