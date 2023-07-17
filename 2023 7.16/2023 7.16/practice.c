#include <stdio.h>

//int is_prime(int x)
//{
//	int a = 0;
//	for (a = 2; a < x; a++)
//	{
//		if (x % a == 0)
//			return 0;
//
//		return 1;
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
//}
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n一共有%d闰年 ", count);
//	return 0;
//}
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int middle = (right + left) / 2;
		if (k < arr[middle])
		{
			right = middle - 1;
		}
		else if (k > arr[middle])
		{
			left = middle + 1;
		}
		else
		{
			return middle;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("找不到");
	}
	else
	{
		printf("找到了，下标是%d", ret);
	}

	return 0;
}