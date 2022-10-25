#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char c1, c2, c3, c4, c5, c6;
	scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
	c5 = getchar();//4
	c6 = getchar();//5
	putchar(c1);
	putchar(c2);
	printf("%c%c\n", c5, c6);

	/*unsigned int a = 65, b = 66, c = 67;
	printf("%c%c%c", a, b, c);*/

	/*double r = 3.4, n = 3.14;
	double l, s;
	l = 2 * n * r;
	s = n * r * r;
	printf("l = %lf  s = %lf", l, s);*/
	double a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	printf("%lf", (a + b + c) / 3.0);

	return 0;
}