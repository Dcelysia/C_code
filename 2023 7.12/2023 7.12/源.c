
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//	char arr1[] = "welcome to  bit";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	printf("���������룺");
//	int se = 0;
//	scanf_s("%d", &se);
//	int a = 1;
//	int i = 0;
//	while (a<=3)
//	{
//		scanf_s("%d", &se);
//        if (se = 123456)
//		{
//			printf("������ȷ");
//			break;
//		}
//		else
//		{
//			printf("�����������������:");
//			scanf_s("%d", &se);
//			a++;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0)
//		{
//
//
//			printf("������ȷ");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("�����������");
//	}
//
//	return 0;
//}

  void menu()
	{
    printf("*****************************\n");
	printf("***********1.play************\n");
	printf("***********2.no**************\n");
	printf("*****************************\n");
	printf("*****************************\n");
	printf("*****************************\n");

    }
  int input =0;
  int main()
  {
	  do
	  {
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������:\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;

		}
		  
	  } while (input);

	  return 0;
  }

