#define _CRT_SECURE_NO_WARNINGS
#include "name.h"

//��ӡ��ͷ����
void startmenu()
{
	printf("------------------------------------\n");
	printf("------------------------------------\n");
	printf("-----------   ��ӭ������ -----------\n");
	printf("--- Ϊ���Hayaizoѧ������������� --\n");
	printf("----------    ̹����Ϸ��   ---------\n");
	printf("------------------------------------\n");
	printf("------------------------------------\n");
	Sleep(3000);
	system("CLS");
	printf("��Ϸ��������:>\n");
	Sleep(1500);
	printf("���̹��ͼ��Ϊ��P\n");
	Sleep(1500);
	printf("����̹��ͼ��λ: @\n");
	Sleep(1500);
	printf("���˺������һ��ʼʱ��������������Ĳ�ͬ��λ��\n");
	Sleep(2000);
	printf("���˺����ÿһ�ֻ�������������ƶ�һ����߷����ӵ�\n");
	Sleep(2000);
	printf("��ҿ��ֳ�����ս������λ�ã�ÿһ�ֿ���ѡ�����������ƶ�һ�����2�񣬻���ѡ�����ӵ���֮��ѡ�����ӵ��ķ���\n");
	Sleep(4000);
	printf("�����һ�ֲ�����Ϻ���������������е���̹�ˣ��ᱻ���У���������Ҫ��)\n");
	Sleep(2000);
	printf("����ӵ�*��������ң�����Ϸ�����\n");
	Sleep(2000);
	printf("����ӵ�*�����˵���̹��,���ڵ�ͼ�ϱ߽����⴦����һ���µ�̹��,ֱ�����ս��Ϊֹ\n");
	Sleep(2000);
	printf("��ͼ���Ϊ12X12,������з�̹��������ʱ���벻Ҫ����143����Ȼ��Ϸ��ֱ���˳�\n");
	Sleep(2000);
	printf("��Ϸ�Ѷȹ��ߣ�����ϸ˼��ÿһ����ô��\n");
	Sleep(4000);
	system("CLS");
	printf("��ô���ڣ���Ϸ��ʽ��ʼ����\n");
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
//���������еĵз�̹������������������ƶ�
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
		printf("������wdsa����F���������ĸ������߻��߷��䵼��(�����������ѡ��):>");
		char pchoice = 0;
		scanf(" %c", &pchoice);
		int footn = 0;
		char whe = 0;
		if (pchoice == 'w' || pchoice == 'd' || pchoice == 's' || pchoice == 'a')
		{
			printf("������������������룡\n");
			printf("��������ǰ�ߵĲ���(1��2):>");
			scanf("%d", &footn);
		}
		else if(pchoice=='F')
		{
			printf("������Ҫ����ķ���(wdsa):>");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
					printf("�㲻�����Ǳ��ƶ�����Ϊ�Ǳ��Ǳ߽磨��з�̹��\n");
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
			printf("�з�̹�˽�������ƶ�...\n");
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
				//�ж�����
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
				//�ж�����
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
				//�ж����
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