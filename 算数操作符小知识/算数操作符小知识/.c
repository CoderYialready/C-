#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int b = 6 / 5;//������������1��1��ȡ��
	float a = 6.0 / 5.0;
	printf("%d\n", b);
	printf("%f\n", a);

	int c = 6 % 5;
	printf("%d\n", c);//���˱�Ϊ��������1��1��ȡ����

	return 0;
}