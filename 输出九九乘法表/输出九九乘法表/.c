#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int l = 0;
	int j = 0;
	for (j = 1; j <= 9; j++)
	{
		for (l = 1; l <= j; l++)
		{
			printf("%d*%d=%-2d ", j, l, j * l);//%2d��ӡ�������֣���Ϊһ��������ǰ����һ���ո� %-2%d������������
		}
		printf("\n");//������ѭ��l���ٸ�ֵΪһ
	}
	return 0;
}