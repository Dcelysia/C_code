#define _CRT_SECURE_NO_WARNINGS

//int main(void)
//{
//	scanf("%s", arr1);
//	char* pa = arr1;
//	long long arr2[150] = { 0 };
//	while (*pa != '\0')
//	{
//		arr2[*pa]++;
//		pa++;
//	}
//	for (int i = 97; i <= 122; i++)
//	{
//		if (arr2[i] == 1)
//		{
//			printf("%c", i);
//			return 0;
//		}
//	}
//	printf("no");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//char arr1[100003] = { 0 };
//int main(void)
//{
//	int arr[100003] = { 0 };
//	scanf("%s", arr1);
//	int length = strlen(arr1);
//	for (int i = 0; i < length; i++)
//	{
//		for (int j = 0; j < length; j++)
//		{
//			if (arr1[i] != arr1[j])
//			{
//				arr[i]++;
//			}
//		}
//		if (arr[i] == length - 1)
//		{
//			printf("%c", arr1[i]);
//			return 0;
//		}
//	}
//	printf("no");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char a1[501] = { 0 };
//	char a2[501] = { 0 };
//	double p1 = 0.0;
//	scanf("%lf", &p1);
//	scanf("%s", a1);
//	scanf("%s", a2);
//	int len1 = strlen(a1);
//	int len2 = strlen(a2);
//	int sum = 0;
//	for (int i = 0; i < len1; i++)
//	{
//		if (a1[i] == a2[i])
//		{
//			sum++;
//		}
//	}
//	double issame = 1.0 * sum / len1;
//	if (issame >= p1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	char play1[10] = { 0 };
	char play2[10] = { 0 };
	int arr[101];
	for (int i = 0; i < n; i++)
	{
		scanf("%s %s", play1, play2);
		if (strcmp("Rock", play1) == 0 && strcmp("Rock", play2) == 0)
		{
			arr[i] = 0;
		}
		if (strcmp("Rock", play1) == 0 && strcmp("Scissors", play2) == 0)
		{
			arr[i] = 1;
		}
		if (strcmp("Rock", play1) == 0 && strcmp("Paper", play2) == 0)
		{
			arr[i] =2;
		}
		//еп╤о2

		if (strcmp("Scissors", play1) == 0 && strcmp("Rock", play2) == 0)
		{
			arr[i] = 2;
		}
		if (strcmp("Scissors", play1) == 0 && strcmp("Scissors", play2) == 0)
		{
			arr[i] = 0;
		}
		if (strcmp("Scissors", play1) == 0 && strcmp("Paper", play2) == 0)
		{
			arr[i] = 1;
		}
		//еп╤о3
		if (strcmp("Paper", play1) == 0 && strcmp("Rock", play2) == 0)
		{
			arr[i] = 1;
		}
		if (strcmp("Paper", play1) == 0 && strcmp("Scissors", play2) == 0)
		{
			arr[i] = 2;
		}
		if (strcmp("Paper", play1) == 0 && strcmp("Paper", play2) == 0)
		{
			arr[i] = 0;
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			printf("Tie\n");
		}
		if (arr[i] == 1)
		{
			printf("Player1\n");
		}
		if (arr[i] == 2)
		{
			printf("Player2\n");
		}
	}
	return 0;
}

//int main(void)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("\n%d ", sum);
//	return 0;
//}