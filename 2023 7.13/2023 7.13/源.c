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
		printf("请猜数字:");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
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
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字:\n");
			game();
			break;
		case 2:
			printf("爱玩不玩\n");
			break;
		default:
			printf("输错了\n");
			break;

		}

	} while (input);

	return 0;
}