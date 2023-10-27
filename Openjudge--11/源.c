#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//
//int main(void)
//{
//	int ip1 = 0;
//	scanf("%d", &ip1);
//	int op = 0;
//	while (ip1)
//	{
//		int tmp = 0;
//		tmp = ip1 % 10;
//		op = op * 10 + tmp;
//		ip1 /= 10;
//	}
//	printf("%d\n", op);
//
//	return  0;
//}
//int main(void)
//{
//	int m = 0, k = 0;
//	scanf("%d %d", &m,&k);
//	int n1 = m;
//	int op1 = 0;
//	while (n1)
//	{
//		int tmp = n1 % 10;
//		if (tmp == 3)
//		{
//			op1++;
//		}
//		n1 /= 10;
//	}
//	if (op1 == k && m % 19 == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int arr[5000] = { 0 };
//	int m = 0, n = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		if (i + 1 == 1)
//		{
//			for (j = 0; j < n; j++)
//			{
//				arr[j] = -1;
//			}
//		}
//		else if (i + 1 == 2)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((j + 1) % 2 == 0)
//				{
//					arr[j] = 1;
//				}
//			}
//		}
//		else
//		{
//			for (j = 2; j < n; j++)
//			{
//				if ((j + 1) % (i+1) == 0)
//				{
//					arr[j] = -arr[j];
//				}
//			}
//		}
//	}
//	int n5 = 0;
//	for (j = 0; j < n; j++)
//	{
//
//		if (arr[j]==-1)
//		{
//			if (n5 == 0)
//			{
//				printf("%d", j + 1);
//				n5++;
//			}
//			else
//			{
//				printf(",%d", j + 1);
//			}
//			
//		}
//	}
//	return 0;
//}