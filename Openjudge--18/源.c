#define _CRT_SECURE_NO_WARNINGS

//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = n - 1;
//	int arr[3000] = { 0 };
//	int arr2[3000]={ 0 };
//	for (i = 0; i <n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		long long tmp = arr[i] - arr[i + 1];
//		tmp = tmp > 0 ? tmp : -tmp;
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < n-1-1;i++)
//	{
//		for (j = 0; j < n - 1 - i-1; j++)
//		{
//			if (arr2[j] > arr2[j + 1])
//			{
//				int tmp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = tmp;
//			}
//		}
//	}
//	int ifok = 1;
//	int k = 1;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr2[i] != k)
//		{
//			ifok = 0;
//		}
//		k++;
//	}
//	if (ifok)
//	{
//		printf("Jolly\n");
//	}
//	else
//	{
//		printf("Not jolly\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int n = 0,A=0,B=0;
//	int arrA[100] = { 0 };
//	int arrB[100] = { 0 };
//	scanf("%d %d %d", &n, &A, &B);
//	int i = 0;
//	for (i = 0; i < A; i++)
//	{
//		scanf("%d", &arrA[i]);
//	}
//	for (i = 0; i < B; i++)
//	{
//		scanf("%d", &arrB[i]);
//	}
//	int a_n = 0;
//	int b_n =0;
//	int a_score = 0;
//	int b_score = 0;
//	for (i = 0; i < n; i++,b_n++,a_n++)
//	{
//		if (a_n == A)
//		{
//			a_n = 0;
//		}
//		if (b_n == B)
//		{
//			b_n = 0;
//		}
//		if (arrA[a_n] ==0&& arrB[b_n]==2)
//		{
//			a_score++;
//		}
//		if (arrB[b_n] == 0 && arrA[a_n] == 2)
//		{
//			b_score++;
//		}
//		if (arrA[a_n] == 5 && arrB[b_n] == 0)
//		{
//			a_score++;
//		}
//		if (arrB[b_n] == 5 && arrA[a_n] == 0)
//		{
//			b_score++;
//		}
//		if (arrA[a_n] == 2 && arrB[b_n] == 5)
//		{
//			a_score++;
//		}
//		if (arrB[b_n] == 2 && arrA[a_n] == 5)
//		{
//			b_score++;
//		}
//
//	}
//	if (a_score == b_score)
//	{
//		printf("draw\n");
//	}
//	if (a_score > b_score)
//	{
//		printf("A");
//	}
//	if (a_score <b_score)
//	{
//		printf("B");
//	}
//	return 0;
//}