#define _CRT_SECURE_NO_WARNINGS

//int main(void)
//{
//	char arr[1001] = { 0 };
//	gets(arr);
//	char* pa = arr;
//	int sum = 0;
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			arr[i] -= 32;
//		}
//	}
//	char a = *pa;
//
//	while (*pa != '\0')
//	{
//		if (a == *pa)
//		{
//			sum++;
//		}
//		else
//		{
//			printf("(%c,%d)", a, sum);
//			a = *pa;
//			sum = 1;
//		}
//		pa++;
//	}
//	printf("(%c,%d)", a, sum);
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	int ifsame = 1;
//	while (left < right)
//	{
//		if (arr[left] != arr[right])
//		{
//			ifsame = 0;
//			break;
//		}
//		left++;
//		right--;
//	}
//	if (ifsame == 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//
//	return 0;
//}
#include <stdio.h>
//int ishuiwenshu(char* arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	int ifsame = 1;
//	while (left < right)
//	{
//		if (arr[left] != arr[right])
//		{
//			ifsame = 0;
//			break;
//		}
//		left++;
//		right--;
//	}
//	if (ifsame == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main(void)
//{
//	char arr[501] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	int i = 0;
//	int k = 0;
//	int l = 0;
//	char op[501][501] = { 0 };
//	char optrue[501][501] = { 0 };
//	for (i = 0; i <len-1; i++)
//	{
//		for (int j = 2; j < len; j++)
//		{
//			int tmp = ishuiwenshu(arr + i, j);
//			if (tmp == 1)
//			{
//				for (k = 0; k < j; k++)
//				{
//					op[l][k] = *(arr + i + k);
//				}
//				l++;
//			}
//		}
//	}
//	int min = 1000;
//	int index = 0;
//	int arr[1000] = { 0 };
//	for (i = 0; i < l; i++) {
//		for (int j = 0; i < l - i; j++) {
//			int len = strlen(op[j]);
//			if (len < min) {
//				min = len;
//				index = j;
//			}
//		}
//		len = strlen(op[index]);
//		for (k = 0; k < len; k++) {
//			optrue[i][k] = op[index][k];
//		}
//	}
//
//	return 0;
//}
