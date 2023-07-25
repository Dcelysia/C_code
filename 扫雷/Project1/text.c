
#include "game.h"

void menu()
{
	printf("********************************\n");
	printf("********************************\n");
	printf("******       1.play       ******\n");
	printf("******       0.exit       ******\n");
	printf("********************************\n");
	printf("********************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	Displayboard(show, ROW, COL);
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);
	Findmine(mine,show,ROW, COL);
}
int main(void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		
		printf("请输入:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("爱玩不玩，再见\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}