#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int fa = 0;
//	if (m > n)
//	{
//		fa = n;
//    }
//	else
//	{
//		fa = m;
//	}
//	while (1)
//	{
//		if (m % fa == 0 && n % fa == 0)
//		{
//			printf("��С��Լ����:%d\n", fa);
//			break;
//        }
//		fa--;
//	}
//	
//	return 0;
//}
int main()//շת����� 24 % 18 =1��6
                     //18 % 6  =0 ��6Ϊ��С��Լ��
{
	int a = 0;
	int s = 0;
	scanf("%d%d", &a, &s);
	int g = 0;

	while (g = a % s)
	{
		a = s;
		s = g;
}
	printf("��С��Լ��:%d\n", s);
	return 0;
}



