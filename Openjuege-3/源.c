#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int ip = 0;
//	scanf("%d", &ip);
//	if (ip >= 10 && ip <= 99)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int n1 = 0, n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	if (n1 >= 10 || n2 >= 20)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}

//int main(void)
//{
//
//	int ip = 0;
//	scanf("%d", &ip);
//	if (ip % 3 == 0 && ip % 5 == 0)
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
//
//	int ip = 0;
//	scanf("%d", &ip);
//	if (ip % 3 == 0 && ip % 5 == 0&&ip%7==0)
//	{
//		printf("3 5 7\n");
//	}
//	else if(ip % 3 == 0 && ip % 5 == 0)
//	{
//		printf("3 5\n");
//	}
//	else if (ip % 3 == 0 && ip % 7 == 0)
//	{
//		printf("3 7\n");
//	}
//	else if (ip % 5 == 0 && ip % 7 == 0)
//	{
//		printf("5 7\n");
//	}
//	else if (ip % 3 == 0)
//	{
//		printf("3\n");
//	}
//	else if (ip % 5 == 0)
//	{
//		printf("5\n");
//	}
//	else if (ip % 7 == 0)
//	{
//		printf("7\n");
//	}
//	else
//	{
//		printf("n\n");
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int n1 = 0, n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	if ((n1 < 60 && n2 >= 60) || ((n1 >= 60 && n2 <60)))
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}

int main(void)
{
	int ip = 0;
	scanf("%d", &ip);
	if (ip == 1 || ip == 3 || ip == 5)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}
