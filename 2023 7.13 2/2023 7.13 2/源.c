#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int emp = a;
//		a = c;
//		c = emp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
////}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//	}
//	}
//
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		int tem = m;
//		m = n;
//		n = tem;
//	}
//	int b = n;
//	while (1)
//	{
//		if (m % b == 0 && n % b == 0)
//		{
//			printf("%d ", b);
//			break;
//		}
//			
//		
//		b--;
//	}
//
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int t = 0;
	while (a % b)
	{
		t = a % b;
		a = b;
		b = t;
	}
	printf("最大公约数是:%d", b);


	return 0;
}