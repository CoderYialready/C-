#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))//sizeof���������unsigned int���ͣ��Ƚ�ʱint ת��Ϊunsigned int
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}