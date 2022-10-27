#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	//int a, b, c, t1, t2;
	//scanf("%d %d %d", &a, &b, &c);
	/*int a = 2, b = 3, c = 4, t1, t2;	
	t1 = a < b ? a : b;
	t2 = c < t1 ? c : t1;
	printf("%d", t2);*/
	//sqrt 表示根号 引<math.h>
	int a, b, c;
	float p,s;
	scanf("%d %d %d", &a, &b, &c);
	p = (a + b + c) * 0.5;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("%f", s);
	return 0;
}