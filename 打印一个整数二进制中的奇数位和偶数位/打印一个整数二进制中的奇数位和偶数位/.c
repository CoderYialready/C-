#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	//00000000000000000000000000000101
	for(i = 31; i >= 1; i -= 2 )
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	//���������ҵ�����һλ������ ��λ������ ʹ���Ƶ���һλ
	return 0;
}