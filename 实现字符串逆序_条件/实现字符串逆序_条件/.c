#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>    //����:��ʹ��C���Կ⺯��
int my_strlen(char* str)
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
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right)
	{
		char tem = str[left];
		str[left] = str[right];
		str[right] = tem;
		left++;
		right--;
	}

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}