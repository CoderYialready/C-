#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	// ÿһλһ��һ���Ƚϣ��ظ�32��

	int a, b;
	scanf("%d %d", &a, &b);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((a >> i) & 1 != (b >> i) & 1 )
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}