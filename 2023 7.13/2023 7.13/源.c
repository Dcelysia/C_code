#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>>
#include<time.h>
int guess = 0;
void menu()
{
	printf("*****************************\n");
	printf("***********1.play************\n");
	printf("***********2.no**************\n");
	printf("*****************************\n");
	printf("*****************************\n");
	printf("*****************************\n");

}
void game()
{
	
	int ret = rand()%100+1;
	printf("%d", ret);
	while (1)
	{
		printf("�������:");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}

	}
}
int input = 0;
int main()
{
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������:\n");
			game();
			break;
		case 2:
			printf("���治��\n");
			break;
		default:
			printf("�����\n");
			break;

		}

	} while (input);

	return 0;
}