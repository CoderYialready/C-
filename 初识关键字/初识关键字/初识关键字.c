#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	/*typedef unsigned int u_int;
//	u_int num = 100;
//	printf("%d\n", num);*/
//	return 0;
//}

//extern int g_val;
// void test()
//{
	//int a = 1;
	//a++;
	//printf("%d", a);
//}
//int Add(int x, int y),
//{
//
//return x + y;
//}



extern int Add(int, int);
int main()
{
	//int i = 0;
		//while (i < 10)
	//	{
		//	test();
		//	i++;
		//}
		//printf("%d\n", g_val);
		int n = 1;
		int m = 2;
		int sum = Add(n, m);
		printf("sum = %d\n", sum);


	return 0;
}



