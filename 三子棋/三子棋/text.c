#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("**********************\n");
	printf("******  1.开始  ******\n");
	printf("******  0.退出  ******\n");
	printf("**********************\n");
	printf("**********************\n");

}

void game()
{
	char ret = 0;
	char board[ROW][COL];
	//初始化棋盘
	Initboard(board,ROW,COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	while (1)
	{
		playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret=iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		computerplay(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret=iswin(board, ROW, COL);
		if (ret != 'c')
			break;


	}
	if (ret == '*')
	{
		printf("玩家获胜\n");	
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else if (ret == 'a')
	{
		printf("平局\n");
		
	}
	Displayboard(board, ROW, COL);


}
int main(void)
{
	srand((unsigned int)time(NULL));
	int i = 0;
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			printf("是否要重新玩，是输入1，不是输入2\n");
			printf("请输入:");
			scanf("%d", &input);
			break;
				
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误。请重新选择\n");
			break;


		}
		if (input == 2)
			break;
	} while (i);
	return 0;
}