#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	printf("遇见野生小詹:>\n");
	printf("是否交好(1/0)?>:\n");//1交好 2拒绝
	scanf("%d", &input);

	if (input == 1)
	{
		printf("成为大佐的小弟\n");
	}
	else
	{
		printf("詹某用社会语录吓唬你\n");
	}





	return 0;
}








