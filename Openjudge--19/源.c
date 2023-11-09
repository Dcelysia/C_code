#define _CRT_SECURE_NO_WARNINGS
//
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	long long sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum += arr1[i] * arr2[i];
//	}
//	printf("%lld", sum);
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	char arr1[201] = { 0 };
//	char arr2[201] = { 0 };
//	char arr3[202] = { 0 };
//	scanf("%s", &arr1);
//	scanf("%s", &arr2);
//	char* p1 = arr1;
//	char* p2 = arr2;
//	int jinshi = 0;
//	int i = 0;
//	while (*p1 != '\0' || *p2 != '\0')
//	{
//		int tmp = *p1 - '0' + *p2 - '0'+jinshi;
//		if (tmp / 10 != 0)
//		{
//			jinshi = tmp / 10;
//			tmp %= 10;
//		}
//		else
//		{
//			jinshi = 0;
//		}
//		arr3[i] = tmp + '0';
//		i++;
//		*p1++;
//		*p2++;
//	}
//	if (*p1 != '\0')
//	{
//		while (*p1 != '\0')
//		{
//			arr3[i] = *p1;
//			i++;
//			p1++;
//		}
//	}
//	if (*p2 != '\0')
//	{
//		while (*p2 != '\0')
//		{
//			arr3[i] = *p2;
//			i++;
//			p2++;
//		}
//	}
//	char* p3 = arr3;
//	int if0 = 0;
//	while (*p3 != '\0')
//	{
//		if (*p3 != '0')
//		{
//			if0 = 1;
//		}
//		if (if0 == 1)
//		{
//			printf("%c", *p3);
//		}
//		p3++;
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr1[201] = { 0 };
	char arr2[201] = { 0 };	

	scanf("%s", &arr1);
	scanf("%s", &arr2);
	int size1 = strlen(arr1);
	int size2 = strlen(arr2);
	int n1[201] = { 0 };
	int n2[201] = { 0 };
	int n3[201] = { 0 };
	int len = 201;
	for (int i = 0; i <size1; i++)
	{
		n1[len - size1] = arr1[i] - '0';
		len++;
	}
	len = 201;
	for (int i = 0; i<size2; i++)
	{
		n2[len - size2] = arr2[i] - '0';
		len++;
	}
	if (size1 >= size2)
	{
		for (int i = 200; i >= 200 - size1; i--)
		{
			n3[i] = n1[i] + n2[i];
			if (n3[i] >= 10)
			{
				int tmp = n3[i] / 10;
				n3[i] %= 10;
				n3[i - 1] += tmp;
			}
		}
		int flag = 0;
		for (int i = 0; i <= 200; i++)
		{
			if (flag == 0 && n3[i] != 0)
			{
				flag = 1;
			}
			if (flag == 1)
			{
				printf("%d", n3[i]);
			}
		}
	}
	if (size2 > size1)
	{
		for (int i = 200; i >= 200 - size2; i--)
		{
			n3[i] = n1[i] + n2[i];
			if (n3[i] >= 10)
			{
				int tmp = n3[i] / 10;
				n3[i] %= 10;
				n3[i - 1] += tmp;
			}
		}
		int flag = 0;
		for (int i = 0; i <= 200; i++)
		{
			if (flag == 0 && n3[i] != 0)
			{
				flag = 1;
			}
			if (flag == 1)
			{
				printf("%d", n3[i]);
			}
		}
	}
	return 0;
}

//#include<stdio.h>
//#include<string.h>
//int main() {
//	char x[201];
//	char y[201];
//	int a[201] = { 0 };
//	int b[201] = { 0 };
//	int c[201] = { 0 };
//	gets(x);
//	gets(y);
//	int len1 = strlen(x), len2 = strlen(y);
//	int len = 201;
//	for (int i = 0; i < len1; i++) {
//		a[len - len1] = x[i] - '0';
//		len++;
//	}
//	len = 201;
//	for (int i = 0; i < len2; i++) {
//		b[len - len2] = y[i] - '0';
//		len++;
//	}
//	if (len1 == 1 && len2 == 1) {
//		if (a[200] == 0 && b[200] == 0) {
//			printf("0");
//			return 0;
//		}
//	}
//	if (len1 >= len2) {
//		for (int i = 200; i >= 200 - len1; i--) {
//			c[i] += a[i] + b[i];
//			if (c[i] >= 10) {
//				c[i] -= 10;
//				c[i - 1] += 1;
//			}
//		}
//		int flag = 0;
//		for (int i = 0; i <= 200; i++) {
//			if (flag == 0 && c[i] != 0) {
//				flag = 1;
//			}
//			if (flag == 1) {
//				printf("%d", c[i]);
//			}
//		}
//	}
//	else {
//		for (int i = 200; i >= 200 - len2; i--) {
//			c[i] += a[i] + b[i];
//			if (c[i] >= 10) {
//				c[i] -= 10;
//				c[i - 1] += 1;
//			}
//		}
//		int flag = 0;
//		for (int i = 0; i <= 200; i++) {
//			if (flag == 0 && c[i] != 0) {
//				flag = 1;
//			}
//			if (flag == 1) {
//				printf("%d", c[i]);
//			}
//		}
//	}
//	return 0;
//}