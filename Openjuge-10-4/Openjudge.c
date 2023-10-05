#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
////int main(void)
////{
////	printf("Hello, World!");
////}
////输入一个字符，打印一个菱形
//int main(void)
//{
//	char ip = 0;
//	scanf("%c", &ip);
//	//上半版本
//	int i = 0,j = 0,k=0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 1 + i * 2; k++)
//		{
//			printf("%c", ip);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k<1+(1-i)*2; k++)
//		{
//			printf("%c",ip);
//		}
//		printf("\n");
//	}
//	
//}
//输出第二个整数

int main(void)
{
	int ip1 = 0, ip2 = 0, ip3 = 0;
	scanf("%d %d %d", &ip1, &ip2, &ip3);
	printf("%d\n", ip2);
	return 0;
}