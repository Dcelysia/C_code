#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void menu(void)
{
	printf("****************************\n");
	printf("*****1.Add      2.Sub  *****\n");
	printf("*****2.Mul      3.Div  *****\n");
	printf("*******    0.exit    *******\n");
	printf("****************************\n");
}
void cal(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������:");
	scanf("%d %d", &x, &y);
	printf("�����%d\n", p(x, y));
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main(void)
{
	int input = 0;
	
	do
	{
		int (*p1[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			switch (input)
			{
			case 1:
				cal(Add);
				break;
			case 2:
				cal(Sub);
				break;
			case 3:
				cal(Mul);
			case 4:
				cal(Div);
				break;
			}
		}
		else if (input == 0)
		{
			printf(("�˳�\n"));
		}
		else
		{
			printf("�������,���������\n");
		}
	} while (input);
	return 0;
}