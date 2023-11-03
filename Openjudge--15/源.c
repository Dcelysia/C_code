#define _CRT_SECURE_NO_WARNINGS


//int main(void)
//{
//	int add_coin = 1;
//	int coin_sum = 0;
//	int day = 0;
//	scanf("%d", &day);
//	int n2 = 0;//判断是否连续
//	while (day>0)
//	{
//		coin_sum += add_coin;
//		n2++;
//		if (n2 == add_coin)
//		{
//			add_coin++;
//			n2 = 0;
//		}
//		day--;
//
//	}
//	printf("%d", coin_sum);
//	return 0;
//}

//int main(void)
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	int n2 = 0;//相等的数
//	int i = 0;
//	int op = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &n2);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == n2)
//		{
//			op++;
//		}
//	}
//	printf("%d\n", op);
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int tall = 0;
//	scanf("%d", &tall);
//	tall += 30;
//	int op = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (tall >= arr[i])
//		{
//			op++;
//		}
//	}
//	printf("%d", op);
//	return 0;
//}

//int main(void)
//{
//	double arr[10] = { 0 };
//	int i = 0;
//	arr[0] = 28.9;
//	arr[1] = 32.7;
//	arr[2] = 45.6;
//	arr[3] = 78.0;
//	arr[4] = 35.0;
//	arr[5] = 86.2;
//	arr[6] = 27.8;
//	arr[7] = 43.0;
//	arr[8] = 56.0;
//	arr[9] = 65.0;
//	int n1 = 0;
//	double sum = 0.0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n1);
//		sum += arr[i] * n1;
//	}
//	printf("%.1lf", sum);
//	return 0;
//}
#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = n - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}