#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//a = 0时 0 && 任何数都为假，故++不再进行运算，只有a会++
	i = a++ || ++b && d++;//a = 1时 1 || 任何数都为真，故后面不再运算，只有a会++
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);


	return 0;
}