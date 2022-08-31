#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* str)//
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
{
	char tem = *str;
	int len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (*(str+1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tem;



}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}