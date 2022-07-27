#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	;//自己输入要有scanf函数
//	while (a < b)
//	{
//		printf("%d\n", a);
//	}
//	if (a > b)
//		printf(" %d\n",b);
//
//
//
//	return 0;
//}
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
	
}




int main()
{
	int a = 0;
	int b = 0;
    scanf("%d %d",&a,&b);
	int m = Max(a, b);
	printf("%d\n",m);







}













