#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Max()
{
	return 0;
}
int FAL()
{
	return 0;
}
int main()
{
	//��Ŀ������
	int a = 2;
	int b = 3;
	int c = (a > b ? a : b);
	int d = (b > a ? (a++) : (b += 1));
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", a);

	//���ű��ʽ
	int g = 2;
	int h = 3;
	int f = (g += 1, h += 2, h = h - a);
	printf("%d\n", f);

	if (h += 2, g += 3, f > 0);//��f > 0�ж�
	{}

	int n = 0;
	n = Max();
	FAL(n);
	while (n > 0)
	{
		n = Max();
		FAL(n);
	}
	//��Ϊ
	while (n = Max(), FAL(n), n > 0);
	return 0;
}