#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Digitsum(int n)
//{
//	if (n / 10 != 0 )
//	{
//	int m = n % 10;
//	int l = n / 10;
//	return m + Digitsum(l);
//    }
//	return n;
//}

int Digitsum(int n)
{
	if (n > 9)
	{
		return Digitsum(n / 10) + (n % 10);
	}
	else
	{
		return n;
	}

}
int main()
{
	int num = 2564;
	int sum = Digitsum(num);
	printf("%d\n", sum);

	return 0;
}