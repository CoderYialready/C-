#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//a = 0ʱ 0 && �κ�����Ϊ�٣���++���ٽ������㣬ֻ��a��++
	i = a++ || ++b && d++;//a = 1ʱ 1 || �κ�����Ϊ�棬�ʺ��治�����㣬ֻ��a��++
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);


	return 0;
}