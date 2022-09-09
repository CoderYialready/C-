#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("������������ɨ����Ϸ������������\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++)//�����Ǵ洢9*9�ĵط�,ע������Ҫ��Ӧ
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
    }
	printf("������������ɨ����Ϸ������������\n");
}

void SetBoard(char mine[ROWS][COLS], int row, int col)
{
	int count = 10;
	while (count)
	{
		int x = rand() % row + 1;//ÿִ��һ������һ�������
		int y = rand() % row + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';//�ı�Ҫ������ԭ������
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;

	while (win < ROW * COL - Set)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (mine[x][y] == '1')
			{
				//int ret = get_mine_count()
				printf("������\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine,x,y );//ͳ���׵ĸ���
				show[x][y] = count + '0';//������ַ��洢
				win++;
				DisplayBoard(show, ROW, COL);

			}
		}
		else
		{
			printf("����Ƿ�������������\n");
			break;
		}
	}
	if (win == ROW * COL - Set)
	{
		printf("��ϲ�㣬��Ӯ��\n");
		DisplayBoard(mine, ROW, COL);

	}
}