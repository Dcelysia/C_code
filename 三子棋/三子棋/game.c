#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"
void Initboard(char board[ROW][COL], int row, int col)//初始化棋盘的函数
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}

	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");

		
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	
	int x = 0;
	int y = 0;

	while (1)
		
	{
		printf("请下棋:");
		int x = 0;
		int y = 0;

        scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此格已被占用，请重新输入\n");
			}

		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}
void computerplay(char board[ROW][COL],int row,int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int x = rand() % row;	
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1]&& board[i][1]==board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
		
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i]&& board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}


	}

	if ((board[0][0] == board[1][1]&& board[1][1]==board[2][2] && board[1][i] != ' ')|| (board[2][0] == board[1][1] && board[1][1]== board[0][2] && board[1][i] != ' '))
	{
		return board[1][1];
	}
	int ret = isfull(board, row, col);
	if (ret == 1)
	{
		return 'a';
	}
	return 'c';

}