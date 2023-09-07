#include "contact.h"

void menu()
{
	printf("*****     1.ADD          2.DEL    ******\n");
	printf("*****     3.SEARCH       4.MODIFY ******\n");
	printf("*****     5.SOFT         6.PRINT  ******\n");
	printf("*****     0.EXIT                  ******\n");
	printf("****************************************\n");
	printf("****************************************\n");
	printf("****************************************\n");
	printf("****************************************\n");
}
enum NUM
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SOFT,
	PRINT
};
int main()
{
	int input = 0;
	Contact con;
	Initcon(&con);
	LoadContact(&con);
	do

	{
		menu();
		printf("请输入->");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			SaveContact(&con);
			DestoryContact(&con);
			printf("退出通讯录");
			break;
		case ADD:
			ADDContact(&con);
			//增加人的信息
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SOFT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}	
	} while (input);

	return 0;
}