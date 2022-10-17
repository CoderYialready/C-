#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void ch(char* p,int sz)
{
	int i = 0;
	for (i = 0; i <= sz; i++)
	{
		if (*p <= 90)
		{
			*p += 32;
		}
		else
		{
			*p -= 32;
		}
		p++;
	}
}
int main()
{
	char arr[20] = "abcDEF";
	int size = (sizeof(arr) / sizeof(arr[0])) / 4;
	ch(arr,size);
	printf("%s\n", arr);
	return 0;
}