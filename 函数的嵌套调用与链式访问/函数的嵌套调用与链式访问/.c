#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void two()
//{
//	printf("Ç¶Ì×µ÷ÓÃ\n");
//}
//void three()
//{
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		two();
//	}
//}
//int main()
//{
//	three();
//	return 0;
//}
int main()
{
	char arr1[] = { 0 };
	char arr2[] = "abc";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", strcpy(arr1, arr2));
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}