#include <stdio.h>

void reverse(char*start)
{
	char*tmp = start;
	int len = 0;
	while(*tmp++ != '\0')
	len++;
	char*end = start + len - 1;
	int left = 0;
	int right = len - 1;
	while(left < right)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
		left++;
		right--;
	}
}

void link(char*arr1,char*arr2)
{
	while(*arr1 != '\0')
	arr1++;
	while(*arr2 != '\0')
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;	
	}
	*arr1 = *arr2;
} 
int main()
{
	char arr1[100];
	char arr2[100];
	gets(arr1);
	gets(arr2);
	reverse(arr1);
	reverse(arr2);
	printf("%s\n%s\n",arr1,arr2);
	link(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}
