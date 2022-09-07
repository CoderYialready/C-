#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW  3//define用于定义标识符常量 无需加等号
#define COL  3

//初始化棋盘的
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑走
void ComputerMove(char board[ROW][COL],int row, int col);

//判断输赢
char IsWin(char board[ROW][COL], int row, int col);