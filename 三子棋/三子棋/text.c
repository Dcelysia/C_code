#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("**********************\n");
	printf("******  1.��ʼ  ******\n");
	printf("******  0.�˳�  ******\n");
	printf("**********************\n");
	printf("**********************\n");

}

void game()
{
	char ret = 0;
	char board[ROW][COL];
	//��ʼ������
	Initboard(board,ROW,COL);
	//��ӡ����
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
		printf("��һ�ʤ\n");	
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ\n");
	}
	else if (ret == 'a')
	{
		printf("ƽ��\n");
		
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
		printf("��ѡ��:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			printf("�Ƿ�Ҫ�����棬������1����������2\n");
			printf("������:");
			scanf("%d", &input);
			break;
				
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;


		}
		if (input == 2)
			break;
	} while (i);
	return 0;
}