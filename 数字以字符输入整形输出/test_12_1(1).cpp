#include <stdio.h>
#include <string.h>

void change(char *arr,int len)
{
	int n = 0;
	for(n = 0;n < len;n++)
	{
		arr[n] -= '0';
	}
}

int main()
{
	int i = 0;
	char arr[100];
	gets(arr);
	int len = strlen(arr);
	change(arr,len);
	for(i = 0;i < len;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
