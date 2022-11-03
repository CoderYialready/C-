#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, Sn;
	scanf("%d",&a);
	Sn = a + 
		(a * 10 + a) + 
		(a * 100 + a * 10 + a) + 
		(a * 1000 + a * 100 + a * 10 + a) + 
		(a * 10000 + a * 1000 + a * 100 + a * 10 + a);
	printf("%d",Sn);

	return 0;
}