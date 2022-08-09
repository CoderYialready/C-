#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("########################\n");
	printf("########1.开始游戏######\n");
	printf("########0.退出游戏######\n");
	printf("########################\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int fa = 0;
	printf("猜猜数字:>");
	while (1)
	{
		scanf("%d", &fa);
		if (fa < ret)
		{ 
			printf("猜小了");
		}
		else if (fa > ret)
		{
			printf("猜大了");
		}
		else
		{
			printf("猜对了");
			break;
		}
	}



}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default :
			printf("输入错误");
			break;
		}

	} while (input);
	return 0;
}






