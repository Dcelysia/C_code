#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
////int main(void)
////{
////	printf("Hello, World!");
////}
////����һ���ַ�����ӡһ������
//int main(void)
//{
//	char ip = 0;
//	scanf("%c", &ip);
//	//�ϰ�汾
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
//����ڶ�������

int main(void)
{
	int ip1 = 0, ip2 = 0, ip3 = 0;
	scanf("%d %d %d", &ip1, &ip2, &ip3);
	printf("%d\n", ip2);
	return 0;
}