#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	int b = 1;
	int count = 0;
	int ret = 0;
	while (ret <= 31)
	{
		if ((a & b) != 0)
		{
			b = b << 1;
			count++;
			ret++;
		}
		else if ((a & b) == 0)
		{
			b = b << 1;
			ret++;
		}
	}
	printf("%d", count);
return 0;
}








