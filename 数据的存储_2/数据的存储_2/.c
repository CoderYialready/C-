#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}//-1 -2 .....-128 127 126 ..... 1 0
	printf("%d\n", strlen(a));//�� '\0' ֹͣ ��127 + 128 = 255 ����

	unsigned char m = 0;
	for (m = 0; m <= 255; m++)//m��ԶС�ڵ���225 ��ѭ��
	{
		printf("6");
 }
	return 0;
}