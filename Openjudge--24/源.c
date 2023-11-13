#define _CRT_SECURE_NO_WARNINGS

//int a[101];
//int a2[151];
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	memset(a, 0, sizeof(a));
//	memset(a2, 0, sizeof(a));
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int h = 0;
//	int l = 1;
//	a[0] = 0;
//	a[1] = 1;
//	int lmax = 0;
//	for (i = 1; i <= n; i++)
//	{
//		l = 1;
//		for (j = 1; j <= l; j++)
//		{
//			a[j] *= i;
//			a[j] = a[j] + a[j - 1] / 10;
//			a[j - 1] %= 10;
//			if (a[j] >= 10 && j >= l)
//			{
//				l++;
//			}
//		}
//		for (k = 0; k <= l; k++)
//		{
//			a2[k] += a[k];
//		}
//		lmax = lmax > l ? lmax : l;
//		for (h = 1; h <= lmax; h++)
//		{
//			if (h == lmax && a2[h] >= 10)
//			{
//				lmax++;
//			}
//			if (a2[h] >= 10)
//			{
//				a2[h + 1] = a2[h + 1] + a2[h] / 10;
//				a2[h] %= 10;
//			}
//		}
//		memset(a, 0, sizeof(a));
//		a[0] = 0;
//		a[1] = 1;
//	}
//	for (i = 1; i <= lmax; i++)
//	{
//		printf("%d", a2[i]);
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int n = 0;
//	int ifz = 1;
//	while (1)
//	{
//
//	}
//	return 0;
////}
//int main(void)
//{
//	int f1, f2, f3;
//int s[67], f[66];
//int main(void)
//{
//	int len = 0, lenf = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main(void)
//{
//	char s[256];
//	char ps = 0;
//	int op = 0;
//	while (~scanf("%c", &ps))
//	{
//		if (ps == '\n')
//		{
//			break;
//		}
//		if (ps >= '0' && ps <= '9')
//		{
//			op++;
//		}
//	}
//	printf("%d", op);
//}