
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
		
		printf("������:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("���治�棬�ټ�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
	return 0;
}