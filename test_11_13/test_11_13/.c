#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	/*int i = 0;
	int line = 0;
	scanf("%d",&line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(i +1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(line - 1- i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
//	return 0;
//}
	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ, ��20Ԫ�����Ժȶ�����ˮ(���ʵ��)��
int main()
{
	int money = 0;
	printf("�����������ֽ�:");
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("���Ժ�%dƿ��ˮ", total);
	return 0;
}
