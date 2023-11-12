#define _CRT_SECURE_NO_WARNINGS

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000001] = { 0 };
//	int i = 0;
//	int k = 1000000;
//	int sz = 0;
//	if (n == 0 && n == 1)
//	{
//		printf("1\n");
//		return 0;
//	}
//	else
//	{
//		arr[k] = 1;
//		sz++;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		int n = sz;
//		while (n)
//		{
//			arr[k] *= i;
//			k--;
//			n--;
//		}
//		k = 1000000;
//		n = sz;
//		while (n)
//		{
//			if (arr[k] > 9)
//			{
//				int tmp = arr[k] / 10;
//				arr[k - 1] += tmp;
//				arr[k] %=10;
//				sz++;
//			}
//			k--;
//			n--;
//		}
//		k = 1000000;
//	}
//	int if0 = 0;
//	for (int i = 1000001-sz; i < 1000001; i++)
//	{
//		if (arr[i] != 0 && if0 == 0)
//		{
//			if0 = 1;
//		}
//		if (if0 == 1)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[1000];
int main(void)
{

	a[0] = 0;
	a[1] = 1;
	int n = 0, l=1;
	scanf("%d", &n);
	int i = 0, j = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= l; j++)
		{
			a[j] = a[j]*i;
			a[j] = a[j - 1] / 10 + a[j];
			a[j - 1] = a[j - 1] % 10;
			if (a[j] >= 10 && j >= l)
			{
				l++;
			}
		}
	}
	for (i = l; i >= 1; i--)
	{
		printf("%d", a[i]);
	}
}
//#include<cstdio>
//int a[100000];
//int main()
//{
//	int n = 0, l = 1;
//	scanf("%d", &n);
//	a[0] = 0;
//	a[1] = 1;//防止相乘时全部为0 
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= l; ++j)
//		{
//			a[j] = a[j] * i;
//			a[j] = a[j - 1] / 10 + a[j];
//			a[j - 1] = a[j - 1] % 10;
//			if (a[j] >= 10 && j >= l) l++;
//		}
//	}
//	for (int i = l; i >= 1; --i)
//		printf("%d", a[i]);
//	return 0;
//}