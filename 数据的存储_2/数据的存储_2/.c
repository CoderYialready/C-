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
	printf("%d\n", strlen(a));//到 '\0' 停止 有127 + 128 = 255 个数

	unsigned char m = 0;
	for (m = 0; m <= 255; m++)//m永远小于等于225 死循环
	{
		printf("6");
 }
	return 0;
}