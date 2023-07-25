#include "game.h"
void Initboard(char arr[11][11], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void Displayboard(char arr[11][11], int row, int col)
{
	int i = 0;
	int j = 0;
	int x = 0;
	printf("------------ÆåÅÌ-------------\n");
	for (x = 0; x <= col; x++)
	{
		printf("%d ", x);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("------------ÆåÅÌ-------------\n");
}
static int Findcount(char mine[ROWS][COLS],int x,int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[x][y] == '1')
			{
				count++;
			}

		}
	}
	return count;
}
void Setmine(char arr[ROWS][COLS], int row, int col)
{
	int count = mine_count;
	while (count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col)
{
	int count = 0;
	int x = 0;
	int y = 0;
	while (count< row * col -mine_count)
	{
		printf("ÇëÊäÈëÅÅ²éµÄ×ø±ê£º");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("É¨À×Ê§°Ü\n");
				Displayboard(show, ROW, COL);
				break;
			}
			else
			{
				int ret = Findcount(mine, x, y);
				show[x][y] = ret + '0';
				count++;
				Displayboard(show, ROW, COL);

			}
		}
		else
		{
			printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
		}
	}
	if (count == row*col - mine_count)
	{
		printf("¹§Ï²Äã£¬É¨À×³É¹¦\n");
		Displayboard(mine, ROW, COL);

	}
}

