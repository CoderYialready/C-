#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tem = *left;
		*left = *right;
		*right = tem;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 }; 
	gets(arr);
	int len = strlen(arr);
	reverse(arr,arr + len - 1);

	char* start= arr;
	while (*start)
	{
 		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s", arr);

	return 0;
}