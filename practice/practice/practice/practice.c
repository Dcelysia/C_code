#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#define n 13
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5, };
//	int(*parr)[5] = &arr;
//	return 0;


//}
//void print(int arr[3][5], int c, int r)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < c; i++)
//	{
//		for (j = 0; j < r; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print(int (*p)[5], int c, int r)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < c; i++)
//	{
//		for (j = 0; j < r; j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	int arr[3][5] = { {1,2,3,4,5},{3,4,5,6,7},{4,5,6,7,8} };
//	print(arr, 3, 5);
//	return 0;
//}

//int main(void)
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}
//void print(int* p, int c)
//{
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr, 5);
//	return 0;
//}
//求1到10000的水仙数
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	
//for (i = 1; i <= 10000; i++)
//	{
//		int ret = 0;
//		int n = i;
//		while (n != 0)
//		{   n=n/10;
//			ret++;
//		}
//		//ret算出数的位数
//		int t = 0;
//		int a = 0;
//		int sum = 0;
//		int tem = 0;
//		int c = i;
//		for (t = 0; t < ret; t++)
//		{
//			a = c % 10;
//			c /= 10;
//			sum = sum + pow(a,3);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
////	return 0;
////}
//int main(void)
//{
//	int arr[tem][tem] = { 0 };
//	int i = 0;
//	int left = tem / 2 + 1;
//	int right = tem / 2 + 1;
//	for (i = i; i < tem / 2 + 1; i++)
//	{
//		arr[i][left] = "*";
//		arr[i][right] = "*";
//	}
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < tem / 2 + 1; i++)
//	{
//		int arr[tem] = {" "," " ," " ," " ," " ," " ," " ," " ," " ," " ," " ," " ," " };
//		int* pa = &arr[tem / 2 + 1];
//		int* pb = &arr[tem / 2 + 1];
//		*pa = "*";
//		*pb = "*";
//		pa++;
//		pb--;
//		printf("%s", arr);
//	}
//
//
//	return 0;
//}
//int main(void)
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//打上部分
//	for (i = 0; i < line / 2 + 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line / 2 - i; j++)
//		{
//			printf(" ");
//		}
//		int k = 0;
//		for (k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	int h = 0;
//	//打下部分
//	for (h =0; h<line/2; h++)
//	{
//		int a = 0;
//		for (a = 0; a < h + 1; a++)
//		{
//			printf(" ");
//		}
//		int b = 0;
//		for (b = 0; b < (2 * ((line / 2) - h-1)) + 1;b++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//可乐1块钱，两瓶空可乐可以换1瓶可乐，一共20块钱，一共可以换多少可乐
//int main(void)
//{
//	int m = 20;//总钱
//	int count = 0;//一共买了多少可乐
//	int k = 0;//空瓶子的个数
//	while (m!=0)
//	{
//		m--;
//		count++;
//		k++;
//		if (k == 2)
//		{
//			k = 1;
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}
//调整一个整形数组，让奇数项在数组的前面，偶数项在数组的后面
//int main(void)
//{
//	int arr[] = { 5,6,8,9,4,1,2,3,4,5 };
//	int i = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);//原数组的个数
//	int arr1[] = { 0 };//存放奇数的数组
//	int arr2[] = { 0 };//存放偶数的数组
//	int n1 = 0;//奇数的个数
//	int n2 = 0;//偶数的个数
//	int arr1 = 0;
//	int arr2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			arr1[arr1] = arr[i];
//			arr1++;
//
//		}
//	}
//	return 0;
//}
//尝试2
//void print(int arr[],int n)
//{
//	int i = 0;
//	for (i = 0; i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while(left<right)
//	{
//	while ((left < right) && (arr[left] % 2 == 1))
//	{
//		left++;
//	}
//	while ((left < right) && (arr[right] % 2 == 0))
//	{
//		right--;
//	}
//	if (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//	}
//	left++;
//	right--;
//	}
//}
//int main(void)
//{
//	int arr[] = { 2,5,6,8,9,1,2,5 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	print(arr,n);//打印数组的函数
//	move(arr,n);//进行移动的函数
//	print(arr, n);//打印数组的函数
//
//	return 0;
//}

