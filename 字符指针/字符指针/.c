#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char str1[] = "hello";
	char str2[] = "hello";
	char* str3 = "hello";
	char* str4 = "hello";
	if (str1 == str2)
	{
		printf("str1 and str2 are same\n");
	}
	else
	{
		printf("str1 and str2 are not same\n");
	}
	if (str3 == str4)
	{
		printf("str3 and str4 are same\n");
	}
	else
	{
		printf("str3 and str4 are not same\n");
	}

	 const char* p = "hello";
	//*p = 'w';
	printf("%c ",*p);
	
	return 0;
}