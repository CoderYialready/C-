#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 1;
	int n = 1;
	int fal = 0;
	for (n = 1; n <= 3; n++)
	{
		m *= n;//���Ѽ���Ľ׳˻����Ͻ������㣬ʹ����
		fal += m;


	}
	printf("%d\n", fal);//ʵ��1��+2��+3��

	return 0;
}









