#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define Set 10

//���̳�ʼ��
void InitBoard(char board[ROWS][COLS], int row, int col,int ret);

//����չʾ
void DisplayBoard(char board[ROWS][COLS], int row ,int col);

//������
void SetBoard(char mine[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

