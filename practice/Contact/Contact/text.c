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
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			SaveContact(&con);
			DestoryContact(&con);
			printf("�˳�ͨѶ¼");
			break;
		case ADD:
			ADDContact(&con);
			//�����˵���Ϣ
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
			printf("ѡ�����������ѡ��\n");
			break;
		}	
	} while (input);

	return 0;
}