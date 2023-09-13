#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////设置节点
//struct LinkCode
//{
//	int data;
//	struct LinkCode* p;
//};
//void text()
//{
//	//建立链表人员
//	struct LinkCode n1 = { 10,NULL };
//	struct LinkCode n2 = { 20,NULL };
//	struct LinkCode n3 = { 30,NULL };
//	struct LinkCode n4 = { 40,NULL };
//	struct LinkCode n5 = { 50,NULL };
//	//建立辅助指针
//	n1.p = &n2;
//	n2.p = &n3;
//	n3.p = &n4;
//	n4.p  = &n5;
//	struct LinkCode* pCurrent = &n1;
//	while (pCurrent!=NULL)
//	{
//		
//		printf("%d\n", pCurrent->data);
//		pCurrent = pCurrent->p;
//
//	}
//}
//int main(void)
//{
//	text();
//	return 0;
//}

//动态链表
//int main(void)
//{
//    int n = 0xABCDEF;
//    printf("%15d\n", n);
//
//    return 0;
//}
//int main(void)
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}
//int main(void)
//{
//
//    printf("%15d\n", 0xABCDEF);
//    return 0;
//}
//int main(void)
//{
//    int n = printf("Hello world!");
// 
//    printf("\n%d",n);
//
//    return 0;
//}
//int main(void)
//{
//	int input = 0;
//	while (scanf("%c", &input) != EOF)
//	{
//		if (input >= 65 && input <= 122)
//		{
//			printf("YES\n");
//			getchar();
//		}
//		else
//		{
//			printf("NO\n");
//			getchar();
//		}
//	}
//
//	return 0;
//}

/*i*//*nt main(void)
{
	char input = 0;
	input = getchar();
	char arr[8][9] = {0};
	int i = 0;
	int j = 0;
	arr[0][4] = input;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 9; j++)
		{
			
			if (arr[i][j] == input)
			{
				printf("%c", input);
				arr[i + 1][j - 1] = input;
				arr[i + 1][j + 1] = input;
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}*/

//int           main()
//{
//	printf("hello\n");
//}