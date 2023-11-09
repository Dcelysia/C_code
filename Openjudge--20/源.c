#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
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
//		for (int i = 200; i >= 201 - len1; i--) {
//			c[i] = a[i] - b[i];
//			if (c[i] <0&&i!=201-len1) 
//			{
//				c[i] += 10;
//				c[i - 1] -= 1;
//			}
//		}
//		int flag = 0;
//		for (int i = 0; i <= 200; i++) {
//			if (flag == 0 && c[i] != 0) 
//			{
//				flag = 1;
//			}
//			if (flag == 1) {
//				printf("%d", c[i]);
//			}
//		}
//	}
//	else {
//		for (int i = 200; i >= 201 - len2; i--) 
//		{
//			c[i] = a[i] - b[i];
//			if (c[i] < 0&&i!=201-len2)
//			{
//				c[i] += 10;
//				c[i - 1] -= 1;
//			}
//		}
//		int flag = 0;
//		int first = 0;
//		for (int i = 0; i <= 200; i++) {
//			if (flag == 0 && c[i] != 0) {
//				flag = 1;
//				first = 1;
//			}
//			if (flag == 1 && first == 1)
//			{
//				printf("%d", c[i]);
//				first++;
//			}
//			if (flag == 1&&first!=1) 
//			{
//				printf("%d", c[i]);
//			}
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main(void)
{
	char arr[256] = { 0 };
	scanf("%s", &arr);
	char* p1 = arr;
	int count = 0;
	while (*p1 !='\0')
	{
		if (*p1 >= '0' && *p1 <= '9')
		{
			count++;
		}
		p1++;
	}
	printf("%d", count);
	return 0;
}