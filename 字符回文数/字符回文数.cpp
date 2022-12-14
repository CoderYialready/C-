#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100];
	gets(arr);
	int len = strlen(arr);
	int left = 0;
	int right = len - 1;
	int flag = 1;
	while(left < right)
	{
		if(arr[left] != arr[right])
		{
			flag = 0;
			break;
		}
		left++;
		right--;
	}
	if(flag == 1)
	{
		printf("是回文数\n");
	}
	else
	{
		printf("不是回文数\n");
	}
	return 0;
} 
