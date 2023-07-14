#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int tem = 1;
//	int i = 0;
//	int max = 0;
//	scanf("%d",&a);
//	for (i = 1; i <= a; i++)
//	{
//		tem *= i;
//		max += tem;
//	}
//	printf("%d",max);
//
//
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 19;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			left = mid + 1;
		}
		else if (arr[mid] < k)
		{
			right = mid - 1;
		}
		else if (arr[mid] = k)
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{

		printf("找不到了");
	}

	return 0;
}