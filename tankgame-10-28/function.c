#define _CRT_SECURE_NO_WARNINGS
#include "name.h"

//打印开头引语
void startmenu()
{
	printf("------------------------------------\n");
	printf("------------------------------------\n");
	printf("-----------   欢迎来到！ -----------\n");
	printf("--- 为解决Hayaizo学长的生理需求的 --\n");
	printf("----------    坦克游戏！   ---------\n");
	printf("------------------------------------\n");
	printf("------------------------------------\n");
	Sleep(3000);
	system("CLS");
	printf("游戏规则如下:>\n");
	Sleep(1500);
	printf("玩家坦克图标为：P\n");
	Sleep(1500);
	printf("电脑坦克图标位: @\n");
	Sleep(1500);
	printf("敌人和玩家在一开始时都会重生到随机的不同的位置\n");
	Sleep(2000);
	printf("敌人和玩家每一轮会随机上下左右移动一格或者发射子弹\n");
	Sleep(2000);
	printf("玩家开局出生在战场任意位置，每一轮可以选择上下左右移动一格或者2格，或者选择发射子弹，之后选择发射子弹的方向\n");
	Sleep(4000);
	printf("当玩家一轮操作完毕后，如果附近四行里有电脑坦克，会被击毙！！！（重要！)\n");
	Sleep(2000);
	printf("如果子弹*打中了玩家，则游戏会结束\n");
	Sleep(2000);
	printf("如果子弹*打中了电脑坦克,会在地图上边界任意处生成一个新的坦克,直到玩家战死为止\n");
	Sleep(2000);
	printf("地图规格为12X12,再输入敌方坦克数量的时候请不要大于143，不然游戏将直接退出\n");
	Sleep(2000);
	printf("游戏难度过高，请仔细思考每一步怎么走\n");
	Sleep(4000);
	system("CLS");
	printf("那么现在，游戏正式开始！！\n");
}
void Initmenu(char arr[14][14], int ctank, int* px, int* py)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 14; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (i == 0 || i == 13 || j == 0 || j == 13)
			{
				arr[i][j] = '*';
			}
			else
			{
				arr[i][j] = ' ';
			}
		}
	}
	int playx = 1 + rand() % 12;
	int playy = 1 + rand() % 12;
	*px = playx;
	*py = playy;
	if (arr[playx][playy] != '*' && arr[playx][playy] != '@')
	{
		arr[playx][playy] = 'P';
	}
	for (i = 0; i < ctank; i++)
	{
		int cx = 1 + rand() % 12;
		int cy = 1 + rand() % 12;
		if (arr[cx][cy] != '*' && arr[cx][cy] != 'P' && arr[cx][cy] != '@')
		{
			arr[cx][cy] = '@';
		}
		else
		{
			i--;
		}

	}

}
void menu(char arr[14][14])
{
	int i = 0, j = 0;
	printf("-------------------------------------------------\n");
	for (i = 1; i <= 12; i++)
	{
		for (j = 1; j <= 12; j++)
		{
			if (j == 1)
			{
				printf("| %c |", arr[i][j]);
			}
			else
			{
				printf(" %c |", arr[i][j]);
			}
		}
		printf("\n");
		printf("-------------------------------------------------\n");
	}
}
//将场上所有的敌方坦克再随机向上下左右移动
void fuhuoba(char arr[14][14])
{
	int n = 1 + rand() % 4;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	switch (n)
	{
	case 1:
		while (1)
		{
			n1 = 1 + rand() % 12;
			if (arr[1][n1] != '@' && arr[1][n1] != 'P')
			{
				arr[1][n2] = '@';
				break;
			}
		}
		break;
	case 2:
		while (1)
		{
			n1 = 1 + rand() % 12;
			if (arr[12][n1] != '@' && arr[12][n1] != 'P')
			{
				arr[12][n2] = '@';
				break;
			}
		}
		break;
	case 3:
		while (1)
		{
			n1 = 1 + rand() % 12;
			if (arr[n1][1] != '@' && arr[n1][1] != 'P')
			{
				arr[n1][1] = '@';
				break;
			}
		}
		break;
	case 4:
		while (1)
		{
			n1 = 1 + rand() % 12;
			if (arr[n1][12] != '@' && arr[n1][12] != 'P')
			{
				arr[n1][12] = '@';
				break;
			}
		}
		break;

	}
}
void commove(char arr[14][14])
{
	//menu(arr);
	int i = 0;
	int j = 0;
	int arrxy[144][2] = { 0 };
	int n4 = 0;
	int ifsame = 0;
	int k = 0;
	for (i = 1; i <= 12; i++)
	{
		ifsame = 0;
		for (j = 1; j <= 12; j++)
		{
			if ((arr[i][j] == '@')
				&& (arr[i + 1][j] == 'P' || arr[i + 1][j] == '*')
				&& (arr[i - 1][j] == 'P' || arr[i - 1][j] == '*')
				&& (arr[i][j - 1] == 'P' || arr[i][j - 1] == '*')
				&& (arr[i][j + 1] == 'P' || arr[i][j + 1] == '*'))
			{
				continue;
			}
			if (arr[i][j] == '@')
			{
				for (k = 0; k <= n4; k++)
				{
					if ((arrxy[k][0] == i) && (arrxy[k][1] == j))
					{
						ifsame = 1;
						break;
					}
				}
				if (ifsame != 1)
				{
					int move = 1 + rand() % 4;
					if (move == 1)
					{
						if (arr[i + 1][j] != 'P' && arr[i + 1][j] != '*'&& arr[i + 1][j] != '@')
						{
							arr[i][j] = ' ';
							arr[i + 1][j] = '@';
							arrxy[n4][0] = i + 1;
							arrxy[n4][1] = j;
							n4++;
						}
						else
						{
							j--;
						}
					}
					else if (move == 2)
					{
						if (arr[i - 1][j] != 'P' && arr[i - 1][j] != '*' && arr[i - 1][j] != '@')
						{
							arr[i][j] = ' ';
							arr[i - 1][j] = '@';
							arrxy[n4][0] = i - 1;
							arrxy[n4][1] = j;
							n4++;
						}
						else
						{
							j--;
						}
					}
					else if (move == 3)
					{
						if (arr[i][j - 1] != 'P' && arr[i][j - 1] != '*' && arr[i][j - 1] != '@')
						{
							arr[i][j] = ' ';
							arr[i][j - 1] = '@';
							arrxy[n4][0] = i;
							arrxy[n4][1] = j - 1;
							n4++;
						}
						else
						{
							j--;
						}
					}
					else if (move == 4)
					{
						if (arr[i][j + 1] != 'P' && arr[i][j + 1] != '*' && arr[i][j + 1] != '@')
						{
							arr[i][j] = ' ';
							arr[i][j + 1] = '@';
							arrxy[n4][0] = i;
							arrxy[n4][1] = j + 1;
							n4++;
						}
						else
						{
							j--;
						}
					}
				}
				
			}
		}
	}
}
void fire(char arr[14][14], int who,char whe,int x,int y)
{


	int cur_x = x,cur_y = y;
	switch (whe)
	{
	case 'w':
	{
		cur_x = x - 1;
		cur_y = y;
		while (1)
		{
			if (arr[cur_x][cur_y] == '@' && who == 1)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				menu(arr);
				Sleep(1000);
				fuhuoba(arr);
				break;
			}
			else if (arr[cur_x][cur_y] == 'P' && who == 0)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				Sleep(1000);
				endmenu();
				Sleep(3000);
				exit(-1);
			}
			else if (arr[cur_x][cur_y] == '*')
			{
				system("CLS");
				menu(arr);
				break;
			}
			else
			{
				arr[cur_x][cur_y] = '*';
				system("CLS");
				menu(arr);
				Sleep(1000);
				arr[cur_x][cur_y] = ' ';
				cur_x--;
			}

		}
		break;
	}
	case 'd':
	{
		cur_x = x;
		cur_y = y + 1;
		while (1)
		{
			if (arr[cur_x][cur_y] == '@' && who == 1)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				menu(arr);
				Sleep(1000);
				fuhuoba(arr);
				break;
			}
			else if (arr[cur_x][cur_y] == 'P' && who == 0)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				Sleep(1000);
				endmenu();
				Sleep(3000);
				exit(-1);
			}
			else if (arr[cur_x][cur_y] == '*')
			{
			system("CLS");
			menu(arr);
				break;
			}
			else
			{
				arr[cur_x][cur_y] = '*';
				system("CLS");
				menu(arr);
				Sleep(1000);
				arr[cur_x][cur_y] = ' ';
				cur_y++;
			}
		}
		break;
	}
	case 's':
	{
		cur_x = x+1;
		cur_y = y ;
		while (1)
		{
			if (arr[cur_x][cur_y] == '@' && who == 1)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				menu(arr);
				Sleep(1000);
				fuhuoba(arr);
				break;
			}
			else if (arr[cur_x][cur_y] == 'P' && who == 0)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				Sleep(1000);
				endmenu();
				Sleep(3000);
				exit(-1);
			}
			else if (arr[cur_x][cur_y] == '*')
			{
				system("CLS");
				menu(arr);
				break;
			}
			else
			{
				arr[cur_x][cur_y] = '*';
				system("CLS");
				menu(arr);
				Sleep(1000);
				arr[cur_x][cur_y] = ' ';
				cur_x++;
			}
		}
		break;
	}
	case 'a':
	{
		cur_x = x;
		cur_y = y-1;
		while (1)
		{
			if (arr[cur_x][cur_y] == '@' && who == 1)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				menu(arr);
				Sleep(1000);
				fuhuoba(arr);
				break;
			}
			else if (arr[cur_x][cur_y] == 'P' && who == 0)
			{
				arr[cur_x][cur_y] = ' ';
				system("CLS");
				Sleep(1000);
				endmenu();
				Sleep(3000);
				exit(-1);
			}
			else if (arr[cur_x][cur_y] == '*')
			{
				system("CLS");
				menu(arr);
				break;
			}
			else
			{
				arr[cur_x][cur_y] = '*';
				system("CLS");
				menu(arr);
				Sleep(1000);
				arr[cur_x][cur_y] = ' ';
				cur_y--;
			}
		}
		break;

	}
	}
}
int np = 0;
void play(char arr[14][14],int px,int py)
{
	
	while (1)
	{
	    system("CLS");
		commove(arr);
		menu(arr);
		printf("请输入wdsa或者F来决定往哪个方向走或者发射导弹(输入错误将重新选择):>");
		char pchoice = 0;
		scanf(" %c", &pchoice);
		int footn = 0;
		char whe = 0;
		if (pchoice == 'w' || pchoice == 'd' || pchoice == 's' || pchoice == 'a')
		{
			printf("步数输入错误将重新输入！\n");
			printf("请输入向前走的步数(1或2):>");
			scanf("%d", &footn);
		}
		else if(pchoice=='F')
		{
			printf("请输入要发射的方向(wdsa):>");
			scanf(" %c", &whe);
		}
		else
		{
			continue;
		}

		switch (pchoice)
		{
		case 'w':
			if (footn == 1)
			{
				if (arr[px - 1][py] == '*' || arr[px - 1][py] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px - 1][py] = 'P';
					arr[px][py] = ' ';
					px -= 1;
				}
			}
			else if (footn == 2)
			{
				if (arr[px - 2][py] == '*' || arr[px - 2][py] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px - 2][py] = 'P';
					arr[px][py] = ' ';
					px -= 2;
				}
			}

			break;
		case 'd':
			if (footn == 1)
			{
				if (arr[px][py + 1] == '*' || arr[px][py + 1] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px][py + 1] = 'P';
					arr[px][py] = ' ';
					py += 1;
				}
			}
			else if (footn == 2)
			{
				if (arr[px][py+2] == '*' || arr[px][py+2] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px][py + 2] = 'P';
					arr[px][py] = ' ';
					py += 2;
				}
			}


			break;
		case 's':
			if (footn == 1)
			{
				if (arr[px + 1][py] == '*' || arr[px + 1][py] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px + 1][py] = 'P';
					arr[px][py] = ' ';
					px += 1;
				}
			}
			else if (footn == 2)
			{
				if (arr[px + 2][py] == '*' || arr[px + 2][py] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px + 2][py] = 'P';
					arr[px][py] = ' ';
					px += 2;
				}
			}

			break;
		case 'a':
			if (footn == 1)
			{
				if (arr[px][py - 1] == '*' || arr[px][py - 1] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px][py - 1] = 'P';
					arr[px][py] = ' ';
					py -= 1;
				}
			}
			else if (footn == 2)
			{
				if (arr[px][py - 2] == '*' || arr[px][py - 2] == '@')
				{
					printf("你不能往那边移动，因为那边是边界（或敌方坦克\n");
				}
				else
				{
					arr[px][py - 2] = 'P';
					arr[px][py] = ' ';
					py -= 2;
				}
			}

			break;

		case 'F':
			np = 1;
			fire(arr, np,whe,px,py);
			printf("敌方坦克将复活或移动...\n");
			Sleep(2000);
			break;
		
		}
		ifctankkill(arr);

	}

}
void ifctankkill(char arr[14][14])
 {
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int i = 0, j = 0;
	for (i = 1; i <= 12; i++)
	{
		for (j = 1; j <= 12; j++)
		{
			if (arr[i][j] == '@')
			{
				//判断上面
				int cur_x = i-1;
				int cur_y = j;
				while (arr[cur_x][cur_y]!='*'&& arr[cur_x][cur_y] != '@')
				{
					if (arr[cur_x][cur_y] == 'P')
					{
						n1 = 1;
						fire(arr, 0, 'w', i, j);
						break;
					}
					cur_x--;
				}
				//判断下面
				//if (n1 == 0)
				//{
					cur_x = i + 1;
					cur_y = j;
					while (arr[cur_x][cur_y] != '*' && arr[cur_x][cur_y] != '@')
					{
						if (arr[cur_x][cur_y] == 'P')
						{
							n2 = 1;
							fire(arr, 0, 's', i, j);
							break;
						}
						cur_x++;
					}
			/*	}*/
				//判断左边
		/*		if (n2 == 0)
				{*/
					cur_x = i;
					cur_y = j-1;
					while (arr[cur_x][cur_y] != '*' && arr[cur_x][cur_y] != '@')
					{
						if (arr[cur_x][cur_y] == 'P')
						{
							n3 = 1;
							fire(arr, 0, 'a', i, j);
							break;
						}
						cur_y--;
					}
				/*}*/
			/*	if (n3 == 0)
				{*/
					cur_x = i;
					cur_y = j+1;
					while (arr[cur_x][cur_y] != '*' && arr[cur_x][cur_y] != '@')
					{
						if (arr[cur_x][cur_y] == 'P')
						{
							fire(arr, 0, 'd', i, j);
							break;
						}
						cur_y++;
					/*}*/
				}

			}
		}
	}
}
void endmenu()
{
		system("color 04");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		printf("--------   GAME   OVER!!    -----\n");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		Sleep(2000);
		system("CLS");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		printf("--- Thank you for playing!!! ----\n");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		printf("---------------------------------\n");
		Sleep(2000);
		system("CLS");
		double x, y, a;
		for (y = 1.5; y > -1.5; y -= 0.1214)
		{
			for (x = -1.5; x < 1.5; x += 0.05)
			{
				a = x * x + y * y - 1;
				if (a * a * a - x * x * y * y * y <= 0)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}

			}
			printf("\n");
		}
		Sleep(2000);
}