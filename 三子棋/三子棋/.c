#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("******* 1.play ******\n");
	printf("*********************\n");
	printf("******* 0.exit ******\n");
	printf("*********************\n");
}
void game()
{
	//存储数据 二维数组
	char board[ROW][COL];
	//棋盘初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
	 //玩家走
	 PlayerMove(board, ROW, COL);
	 DisplayBoard(board, ROW, COL);
	 //判断输赢
	  ret = IsWin(board, ROW, COL);
	 if (ret != 'z');
	 {
		 break;
	 }
	 //电脑走
	 ComputerMove(board, ROW, COL);
	 DisplayBoard(board, ROW, COL);
	  ret = IsWin(board, ROW, COL);
	 if (ret != 'z');
	 {
		 break;
	 }
    }
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入一个值:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			{
			game();
			break;
			}
		case 0:
		    {
			printf("退出游戏\n");
			  break;
		    }
	    default:
			{
				printf("输入非法，请重新输入\n");
				break;
			}
		}
	} while (input);
		

		return 0;
}