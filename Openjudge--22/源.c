#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int n1 = 100;
//	char arr[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < 101; i++)
//	{
//		arr[i] = 'w';
//	}
//
//	if (n == 0)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		arr[n1] = 2;
//		n--;
//	}
//
//	for ( i = 0; i < n; i++)
//	{
//		int n2 = n1;
//		while (arr[n2] != 'w')
//		{
//			arr[n2] *= 2;
//			n2--;
//		}
//		n2 = n1;
//		while (arr[n2] != 'w')
//		{
//			if (arr[n2] > 9)
//			{
//				arr[n2] -= 10;
//				if (arr[n2 - 1] == 'w')
//				{
//					arr[n2 - 1] = 1;
//				}
//				else
//				{
//					arr[n2 - 1] += 1;
//				}
//			}
//			n2--;
//		}
//	}
//
//	int if0 = 0;
//	for (i = 0; i < 101; i++)
//	{
//		if (arr[i] != 'w' && if0 == 0)
//		{
//			if0 = 1;
//		}
//		if (if0 == 1)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int ip = 0;
//	int np = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &ip);
//		if (ip < 0)
//		{
//			printf("%d ", ip);
//			np++;
//		}
//	}
//	printf("\n");
//	printf("负数的数量:>%d", np);
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main(void)
//{
//	char ip[31] = { 0 };
//	scanf("%s", ip);
//	int len = strlen(ip);
//	char* pc = ip;
//	int arr[31] = { 0 };
//	int n = len;
//	while (*pc != '\0')
//	{
//		arr[31 - n] = *pc - '0';
//		pc++;
//		n--;
//	}
//	int i = 0;
//	int k = 0;
//	int arrtmp[31] = { 0 };
//	int j = 0;
//	int sum = 0;
//	for (k = 2; k <= 9; k++)
//	{
//		n = len;
//		for (j = 0; j < 31; j++)
//		{
//			arrtmp[j] = arr[j];
//		}
//		for (i = 0; i < len; i++)
//		{
//			int tmp = arrtmp[31 - n] % k;
//			if (31 - n < 30)
//			{
//				arrtmp[31 - n + 1] += tmp*10;
//			}
//			if (31 - n == 30)
//			{
//				if (tmp == 0)
//				{
//					sum = 1;
//					printf("%d ", k);
//					break;
//				}
//			}
//			n--;
//		}
//
//	}
//	if (sum == 0)
//	{
//		printf("none\n");
//	}
//
//	return 0;
//}
