#define _CRT_SECURE_NO_WARNINGS
//
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ans = 0;
//
//	for (i = 0; i <= n; i++)
//	{
//		int t = i;
//		if (i % 7 != 0)
//		{
//			while (t!=0)
//			{
//				if (t % 10 == 7)
//				{
//					break;
//				}
//				else
//				{
//					t /= 10;
//				}
//			}
//			if (t == 0)
//			{
//				ans += i * i;
//			}
//		}
//	}
//	printf("%d", ans);
//
//	return 0;
//}
//
//int main(void)
//{
//	int n = 0, C = 0, dex = 0;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		scanf("%d", &C);		
//		printf("0\n");
//		return 0;
//	}
//	else
//	{
//		for (int i = n; i > 0; i--)
//		{
//			scanf("%d", &C);
//			printf("%d ", C * i);
//		}
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int ip2 =0;
//	int ip1 = 0;
//	scanf("%d %d", &ip1,&ip2);
//	int i = 1;
//	int num2 = 0;
//	for (i = ip1; i <= ip2; i++)
//	{
//		int t = i;
//		while (t != 0)
//		{
//			if (t % 10 == 2)
//			{
//				num2++;
//			}
//			t /= 10;
//		}
//
//	}
//	printf("%d", num2);
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int n1, n2;
//	char ip1 = 0;
//	int iso = 0;
//	scanf("%d %d %c %d", &n1, &n2, &ip1, &iso);
//	int i = 0, j = 0;
//	if (iso == 0)
//	{
//		for (j = 0; j < n2; j++)
//		{
//			printf("%c", ip1);
//		}
//		printf("\n");
//		for (i = 1; i < n1 - 1; i++)
//		{
//			for (j = 0; j < n2; j++)
//			{
//				if (j == 0 || j == n2 - 1)
//				{
//					printf("%c", ip1);
//				}
//				else
//				{
//					printf(" ");
//				}
//
//			}
//			printf("\n");
//
//		}
//		for (j = 0; j < n2; j++)
//		{
//			printf("%c", ip1);
//		}
//	}
//	else
//	{
//		for (i = 0; i < n1; i++)
//		{
//			for (j = 0; j < n2; j++)
//			{
//				printf("%c", ip1);
//			}
//			printf("\n");
//	  }
//	}
//	return 0;
//}