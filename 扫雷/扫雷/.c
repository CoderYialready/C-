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
	//������ά����
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	//���̳�ʼ�� �ס�1 ���ס�0
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//������
	SetBoard(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//�Ų���
	FindMine(mine, show,ROW, COL);
	//չʾ����
	///DisplayBoard(mine, ROW, COL);
	

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("�����������������\n");
			break;
		}
		}
	} while (input);
	return 0;
}