#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("************ 1.play **********\n");
	printf("************ 0.exit **********\n");
	printf("******************************\n");
}

void game()
{
	//创建二维数组
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	//棋盘初始化 雷—1 非雷—0
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//布置雷
	SetBoard(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//排查雷
	FindMine(mine, show,ROW, COL);
	//展示棋盘
	///DisplayBoard(mine, ROW, COL);
	

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
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
			printf("输入错误，请重新输入\n");
			break;
		}
		}
	} while (input);
	return 0;
}